#include<iostream>
using namespace std;

int binarysearch(int a[], int l, int h, int key)
{
    while(l<=h)
    {
        int mid = (l+h)/2;
        if(a[mid] == key)
        {
        return mid;
        }
        else if(a[mid] < key)
        {
            l = mid + 1;
        }
        else
        {
            h = mid - 1;
        }
    }
}
 
int main()
{
    cout<<"developed by 22CE047\n";
    int n, l=0, h=0, key, ans;
    cout<<"Enter n ";
    cin>>n;
    int a[n];
    h=n-1;
    cout<<"Enter elements ";
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
    }
    cout<<"Enter key ";
    cin>>key;
    ans = binarysearch(a, l, h, key);
    cout<<ans<<endl;
}