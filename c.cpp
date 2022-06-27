#include <iostream>
using namespace std;
int main()
{
    int n,m,x;
    cin>>n>>m>>x;
    int i,j;
    int a[n][m];
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            cin>>a[i][j];
        }
    }
    int r=0,c=m-1;
    bool flag=false;
    while(r<n && c>=0)
    {
        if(a[r][c]==x)
        {
            flag=true;
            
        }
        if(a[r][c]>x)
        { 
            c--;    
        }
        else 
        {   
            r++;    
        }
    }
    if(flag)
    {
        cout<<"ele found"<<endl;
    }
    else 
    {
        cout<<"ele not found"<<endl;
    }
    return 0;

}