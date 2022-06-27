#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int arr[9]={1,2,5,10,20,50,100,500,1000};
        int i=8;
        int count=0;
        while(n>0 && i>=0);
        {
            if(n/(arr[i])>0){
                count++;
                n=n-(arr[i]);
                i=8;
                continue;
            }
            i--;
        }
        cout<<count<<endl;
    }
    return 0;
}