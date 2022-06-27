#include <bits/stdc++.h>
using namespace std;

int knapsack(int value[],int w[],int n,int W)
{
    if(n==0 || W==0)
    {
        return 0;
    }
    if(w[n-1]>W){
        return knapsack(value,w,n-1,W);
    }
    return max(knapsack(value,w,n-1,W-w[n-1])+value[n-1],knapsack(value,w,n-1,W));
}

int main()
{
    int W,n;
    cin>>W>>n;
    int val[n], w[n];
    for(int i=0;i<n;i++)
        cin>>val[i];

    for(int i=0;i<n;i++)
        cin>>w[i];

    cout<<knapsack(val,w,n,W);
    return 0;
}