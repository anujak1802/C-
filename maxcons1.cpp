#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,k;
    cin>>n>>k;
    vector<int> a(n);
    for(auto &i:a){
        cin>>i;
    }
    int count=0,i=0,ans=0;
    for(int j=0;j<n;j++){
        if(a[i]==0){
            count++;
        }
        while(count>k){
            if(a[i]==0){
                count--;
            }
            i++;
        }
        ans=max(ans,j-i+1);
    }
    cout<<ans<<endl;
    return 0;
}