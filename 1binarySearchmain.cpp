#include<iostream>
using namespace std;

int main()
{
    cout<<"Developed by 22CE047\n";
    int n, l=0, h=0, key;
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
    while(l<=h)
    {
        int mid = (l+h)/2;
        if(a[mid] == key)
        {
        cout<<mid;
        exit(0);
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
    cout<<"-1"<<endl;
}