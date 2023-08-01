#include<iostream>
using namespace std;

void knapsack(int N, int c, int k, int w[])
{
    int i, j,  maxobj = 0;
    for(i=0; i<N; i++)
    {
         int count=0, ans = 0;
       for(j=i; j<N; j++)
       {
            ans = w[j] + ans;
            count = count + 1;
            if(ans>=k && ans<=c)
            {
                if(count>maxobj)
                {
                 maxobj = count;
                }
            }
            if (ans>c)
            {
                    break;
            }
       }
    }
    cout<<"max obj = "<<maxobj;
}
   
int main()
{
    cout<<"Developed by 22CE047\n";
    int N, c, k;
    cout<<"Enter no of objects : ";
    cin>>N;
    cout<<"Enter Capacity of knapsack : ";
    cin>>c;
    cout<<"Enter at least capacity : ";
    cin>>k;
    int w[N];
    cout<<"Enter objects : ";
    for(int i=0; i<N; i++)
    {
        cin>>w[i];
    }
    knapsack(N, c, k, w);
    return 0;
}