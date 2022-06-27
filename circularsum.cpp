#include <bits/stdc++.h>
using namespace std;

int kadane(int a[], int n)
{
    int curr=0;
    int maxsum=INT_MIN;
    for(int i=0;i<n;i++)
    {
        curr+=a[i];
        if(curr<0)
        {
            curr=0;
        }
        maxsum=max(maxsum,curr);
    }
    return maxsum;
}
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int wrap;
    int nonwrap;
    nonwrap=kadane(a,n);
    int total=0;
    for(int i=0;i<n;i++)
    {
        total+=a[i];
        a[i]=-a[i];
    }
    wrap=total+kadane(a,n);
    cout<<max(wrap,nonwrap)<<endl;
    return 0;
}