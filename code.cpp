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
        int count=0;
        for(int i=2;i<n;i++){
            if(n%i==0)
            {
                cout<<"HUNGRY";
                count++;
                break;
            }
        }
        if(count==0 && n<100)
        {
            cout<<"COOKIES";
        }
        else{
            cout<<"HUNGRY";
        }
        cout<<endl;
    }
    return 0;
}