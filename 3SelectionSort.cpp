#include<iostream>
using namespace std;
int main()
{
    int i, j, n;
    cout<<"Developed by 22CE047\n";
    cout<<"Enter n : ";
    cin>>n;
    int a[n];
    cout<<"Enter elements : ";
    for(i=0; i<n; i++)
    {  
        cin>>a[i];
    }
    for(i=0; i<n-1; i++)
    {
        int minIndex=i;
        for(j=i+1; j<n; j++)
        {
            if(a[j] < a[minIndex])
            {
                minIndex = j;
            }
        }
        if(minIndex != i)
        {
            swap(a[i], a[minIndex]);
        }
    }
    for(i=0; i<n; i++)
    {
        cout<<a[i]<<" ";
    }
    return 0;
}