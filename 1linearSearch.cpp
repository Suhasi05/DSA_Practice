#include<iostream>
using namespace std;

int linearsearch(int n, int a[], int key)
{
    for(int i=0; i<n; i++)
    {
        if(a[i] == key)
        {
            return i;
        }
    } 
    return -1;
}
int main()
{
    cout<<"developed by 22CE047\n";
    int n, key, ans=0;
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
    ans = linearsearch(n, a, key);
    cout<<ans<<endl;
    return 0;
}