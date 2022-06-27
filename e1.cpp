#include<iostream>
using namespace std;
int main()
{
    int a=5,d=2,n,an=0,S=0;
    cin>>n;
    an=a+(n-1)*d;
    for(int i=1;i<=n;i++)
    {
        an=a+(i-1)*d;
        cout<<"Term"<<i<<"="<<an<<" ";
        S = S + an;     
    }
    cout<<"Sum= "<< S <<endl;
    return 0;
}