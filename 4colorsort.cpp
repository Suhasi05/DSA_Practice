#include<iostream>
using namespace std;

void colorSort(int a[], int n)
{
    int l=0, m=0;
    int h = n - 1;
    while (m<=h)
    {
        switch (a[m])
        {
        case 0:
        swap(a[l], a[m]);
            m++;
            l++;
            break;
        case 1:
            m++;
            break;
        case 2:
         swap(a[m], a[h]);
            h--;
            break;
        }
    }  
    for(int m=0; m<n; m++)
    {
        cout<<a[m] << " ";
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
    colorSort(a, n);
    return 0;
}


// #include<iostream>
// using namespace std;
// int main()
// {
//     int i,n,l=0,h, m=0, temp=0;
//     cout<<"Developed by 22CE047\n";
//     cout<<"Enter n : ";
//     cin>>n;
//     int a[n];
//     h=n-1;
//     cout<<"Enter elements : ";
//     for(i=0; i<n; i++)
//     {  
//         cin>>a[i];
//     }
//     while(m<=h)
//     {
//         switch (a[m])
//         {
//         case 0:
//         // if(a[m]==0)
//         // {
//             swap(a[l], a[m]);
//             // temp = a[l];
//             // a[l] = a[m];
//             // a[m] = temp;
//             l++;
//             m++;
//             break;
//         // }
//         // if(a[m]==1)
//         // {
//         case 1:
//             m++;
//             break;
//         // }
//         // if(a[m]==2)
//         // {
//             case 2:
//             swap(a[m], a[h]);
//             // temp = a[h];
//             // a[h]= a[m];
//             // a[m]= temp;
//             h--;
//             break;
//         // }
//         }
//     }
//     for(m=0; m<n; m++)
//     {
//         cout<<a[m]<<" ";
//     }

//     return 0;
// }


// class Solution {
//     public void sortColors(int[] a) {
// {
//     int l=0, m=0, temp=0;
//     int n = a.length;
//     int h = n - 1;
//     while (m<=h)
//     {
//         switch (a[m])
//         {
//         case 0:
//             temp = a[l];
//             a[l] = a[m];
//             a[m] = temp;
//             m++;
//             l++;
//             break;
//         case 1:
//             m++;
//             break;
//         case 2:
//            temp = a[m];
//             a[m] = a[h];
//             a[h] = temp;
//             h--;
//             break;
//         }
//     }  
//     // for(m=0; m<n; m++)
//     // {
//     //     return a[m];
//     // }
// }
//     }
// }