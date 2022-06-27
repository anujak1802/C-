#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int curr[n+1];
    curr[0]=0;
    for(int i=1;i<=n;i++)
    {
        curr[i]=curr[i-1]+a[i-1];
    }
    int maxsum=INT_MIN;
    for(int i=1;i<=n;i++)
    {
        int sum=0;
        for(int j=0;j<i;j++)
        {
            sum=curr[i]-curr[j];
            maxsum=max(maxsum,sum);
        }
    }
    cout<<maxsum;
    return 0;
}