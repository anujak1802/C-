#include <iostream>
using namespace std;
int main()
{
    long n, ans=1;//int n,ans=1;   if the no. is smaller than 10
    cout<<"Enter no. to find factorial=";
    cin>>n;
    for (int i=1;i<=n;i++)//for(int i=n;i>=1;i--) if we want to add it in reverse way
    {
        ans=ans*i;
    }
    cout<<n<<"! = "<<ans<<endl;
    return 0;
}