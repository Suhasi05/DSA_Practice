#include<iostream>
using namespace std;
void InsertionSort(int a[], int size, int index)
{
    if(index == size)
    {
        return;
    }
    int curr = a[index];
    int j = index - 1;
    while(j>=0)
    {
        if(curr < a[j]) {
            a[j+1] == a[j--];
        }
        else
            break;
    }
    a[j+1] = curr;
    
    InsertionSort(a, size, index+1);
}
int main()
{
    int i, n;
    cout<<"Enter n : ";
    cin>>n;
    int a[n];
    int index=1;
    cout<<"Enter elements : ";
    for(i=0; i<n; i++)
    {  
        cin>>a[i];
    }
    InsertionSort(a, n, index);

    for(i=0; i<n; i++)
    {  
        cout<<a[i]<<" ";
    }
    return 0;
}