#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,sum;
    
    cin>>n;
    int n1=n;
    int ans=0;
    while(n>0)
    {
        ans=ans+n/3;
        n=n/3;
    }
    if(n-ans>0 ){
        ans++;
    }
    sum=ans+n1;
    cout<<sum;
    return 0;
}