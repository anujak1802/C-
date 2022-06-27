#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i = 0;i<n;i++)
    {
        cin>>a[i];
    }
    int N=1e6+2;
    int in[N];
    for(int i=0;i<N;i++)
    {
        in[i]=-1;
    }
    int minin=INT_MAX;
    for(int i=0;i<n;i++)
    {
        if(in[a[i]]!=-1)
        {
            minin=min(minin,in[a[i]]);
        }
        else{
            in[a[i]]=i;
        }
    }
    if(minin==INT_MAX)
    {
        cout<<"-1"<<endl;
    }
    else{
        cout<<minin<<endl;
    }
    return 0;
}