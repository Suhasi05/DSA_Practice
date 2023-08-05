// #include<iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cout<<"Developed by 22CE047\n";
//     cout<<"Enter number of stick : ";
//     cin>>n;
//     int a[n];
//     for(int i=0; i<n; i++)
//     {
//         cin>>a[i];
//     }
//     int max1=0;
//     for(int i=0; i<n; i++)
//     {
//         for(int j=i+1; j<n; j++)
//         {
//             if(a[i] == a[j] && max1<a[j])
//             {
//                 max1 = a[i];
//                 break;
//             }
//         }
//     }
//     int max2=0;
//     for(int i=0; i<n; i++)
//     {
//         for(int j=i+1; j<n; j++)
//         {
//             if(a[i] == a[j] && max1>a[j] && max2<a[j])
//             {
//                 max2 = a[i];
//                 break;
//             }
//         }
//     }
//     cout<<max1<<" "<<max2<<endl;
//     int area = max1 * max2;
//     if(area==0)
//     {
//         cout<<"-1";
//     }
//     else
//     {
//         cout<<area<<endl;
//     }
//         return 0;
// }

#include <iostream>
using namespace std;
int main()
{
    int n, i, j, max1 = 1, Count = 0;
    cout << "Developed by 22CE047\n";
    cout << "Enter number of stick : ";
    cin >> n;
    int a[n];
    for (i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (i = 1; i < n; i++)
    {
        int s = 0;
        for (j = 0; j < n - i; j++)
        {
            if (a[j] > a[j + 1])
            {
                swap(a[j], a[j + 1]);
                s++;
            }
        }
        if (s == 0) // Prove that data is sorted
        {
            break;
        }
    }
    for (i = n; i >=0; i--)
    {
        if (a[i] == a[i - 1])
        {
            Count++;
            i--;
            max1= a[i] * max1;
        }
        if (Count == 2)
        {
            break;
        }
    }
    if (Count < 2)
    {
        cout << -1 << endl;
    }
    else
    {
        cout <<"Area : "<< max1<< endl;
    }
    }