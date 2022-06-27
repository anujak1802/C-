#include <bits/stdc++.h>
using namespace std;

int setbit(int n,int pos)
{
    return (n | (1<<pos));
}

int main()
{
    int n,i;
    cin>>n>>i;
    cout<<setbit(n,i);
    return 0;
}