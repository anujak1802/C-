#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,m;
    cin>>n>>m;
    int t;
    cin>>t;
    int a[n][m];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++){
            cin>>a[i][j];
        }
    }
    int r=0,c=m-1;
    bool f=false;
    while(r<n && c>=0)
    {
        if(a[r][c]==t){
            f=true;
        }
        
        if(a[r][c]>t){
            c--;
        }

        else{
            r++;
        }
    }

    if(f){
        cout<<"Found";
    }

    else{
        cout<<"Not found";
    }
    return 0;
}