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
    //Bubble sort Start
    for(i=1; i<n; i++)
    {
        int s=0;
        for(j=0; j<n-i; j++)
        {
            if(a[j]>a[j+1])
            {
                swap(a[j], a[j+1]);
                s++;
            }
        }
        if(s==0) //Prove that data is sorted
        {
            break;
        } 
    }
    for(j=0; j<n; j++)
        {
        cout<<a[j]<<" ";
        }
    return 0;
}