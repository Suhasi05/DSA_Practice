#include<iostream>
using namespace std;
void BubbleSort(int a[], int size)
{
    if(size == 0 || size == 1)
    {
        return ;
    }
    for(int i=0; i<size-1; i++)
    {
        if(a[i] > a[i+1])
        {
            swap(a[i], a[i+1]);
        }
    }
    BubbleSort(a, size-1);
}
int main()
{
    int i, n;
    cout<<"Enter n : ";
    cin>>n;
    int a[n];
    cout<<"Enter elements : ";
    for(i=0; i<n; i++)
    {
        cin>>a[i];
    }
    BubbleSort(a, n);
    for(i=0; i<n; i++)
    {
        cout<<a[i]<<" ";
    }
    return 0;
}