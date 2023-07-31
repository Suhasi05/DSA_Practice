#include<iostream>
using namespace std;

int main()
{
    cout<<"Developed by 22CE047\n";
    int n, key;
    cout<<"Enter n ";
    cin>>n;
    int a[n];
    cout<<"Enter elements ";
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
    }
    cout<<"Enter key ";
    cin>>key;
    int i;
    for( i=0; i<n; i++)
    {
        if(a[i] == key)
        {
            cout<<i;
        }
    } 
    if(i==key)
        {
            cout<<"-1";
        }
    return 0;
}