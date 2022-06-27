#include <bits/stdc++.h>
using namespace std;

int fact(int n)
{
    int factor=1;
    for(int i=2;i<=n;i++){
        factor=factor*i;
    }
    return factor;
}

int main()
{
    int n,r;
    cin>>n>>r;
    int ans;
    ans=fact(n)/(fact(r)*fact(n-r));
    cout<<ans;

    return 0;
}