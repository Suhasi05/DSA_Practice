#include<iostream>
#include<set>
using namespace std;
int main()
{
    int n, k;
    set <int> s;
    cout<<"Enter n : ";
    cin>>n;
    cout<<"Enter k : ";
    cin>>k;
    int a[n];
    cout<<"Enter array : ";
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
    }
    for(int i=0; i<(n-k+1); i++)
    {
        for(int j=i; j<k+i; j++)
        {
            s.insert(a[j]);
            // cout<<"j : "<<a[i]<<" ";
        }
        cout<< s.size()<<" ";
        s.clear();
    }
    return 0;
}