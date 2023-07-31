#include <iostream>
#include <algorithm>
using namespace std;
void linear_search(int A[], int n, int key)
{
    int i;
    for (i = 0; i < n; i++)
    {
        if (A[i] == key)
        {
            cout << i << endl;
            break;
        }
    }
    if (i == n)
    {
        cout << "-1" << endl;
    }
}
void binarysearch(int A[], int l, int h, int key)
{
    while(l<=h)
    {
        int mid = (l+h)/2;
        if(A[mid] == key)
        {
        cout<<mid;
        exit(0);
        }
        else if(A[mid] < key)
        {
            l = mid + 1;
        }
        else
        {
            h = mid - 1;
        }
    }
    cout<<"-1"<<endl;
}
int main()
{
    cout<<"developed by 22CE047\n";
    int n, key, l=0;
    cout << "Enter n :";
    cin >> n;
    int h=n-1;
    int A[n];
    cout << "Enter elements : ";
    for (int i = 0; i < n; i++)
    {
        cin >> A[i];
    }
    cout << "Enter the Key :";
    cin >> key;
    cout << "Take 1 for linear search " << endl
         << "Take 2 for Binary search "<<endl;
        int a;
    cin >> a;
    switch (a)
    {
    case 1:
        linear_search(A, n, key);
        break;
    case 2:
        binarysearch( A,  l, h, key);
        break;
    default:
        linear_search(A, n, key);
    }
}