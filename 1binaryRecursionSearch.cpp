#include<iostream>
using namespace std;

int binarySearch(int a[], int l, int h, int key)
{
     int mid = (l+h)/2;
        if(a[mid] == key)
        {
        return mid;
        }
        else if(a[mid] < key)
        {
            l = mid + 1;
            binarySearch(a, l, h, key);
        }
        else
        {
            h = mid - 1;
            binarySearch(a, l, h, key);
        }
}
int main()
{
    cout<<"developed by 22CE047\n";
    int n, l=0, h, key;
    cout<<"Enter n : ";
    cin>>n;
    int a[n];
    h=n-1;
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
    }
    cout<<"Enter key : ";
    cin>>key;
   int ans = binarySearch(a, l, h, key);
   cout<<ans;
}