// #include<iostream>
// using namespace std;

// int main()
// {
//     int i, j, n;
//     cout<<"Enter n : ";
//     cin>>n;
//     int a[n];
//     cout<<"Enter elements : ";
//     for(i=0; i<n; i++)
//     {
//         cin>>a[i];
//     }
//     for(i=1; i<n; i++)
//     {
//         int temp = a[i];
//         j=i-1;
//         while (j>=0 && a[j]>temp)
//         {
//             a[j+1] = a[j];
//             j--;
//         }
//         a[j+1] = temp;
//     }
//      for(j=0; j<n; j++)
//     {
//         cout<<a[j]<<" ";
//     }
//     return 0;
// }

#include<iostream>
using namespace std;

void insertionSort(int a[], int n)
{
    int i, j, key;
    for(i=1; i<n; i++)
    {
        key = a[i];
        j=i-1;
        while (j>=0 && a[j]>key)
        {
            a[j+1] = a[j];
            j--;
        }
        a[j+1] = key;
    }
    for(j=0; j<n; j++)
    {
        cout<<a[j]<<" ";

    }
}
int main()
{
    int i, n;
    cout<<"Developed by 22CE047\n";
    cout<<"Enter n : ";
    cin>>n;
    int a[n];
    cout<<"Enter elements : ";
    for(i=0; i<n; i++)
    {  
        cin>>a[i];
    }
    insertionSort(a, n);
    return 0;
}

