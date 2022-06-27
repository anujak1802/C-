#include <bits/stdc++.h>
using namespace std;

int clearbit(int n,int pos)
{
    int mask=~(1<<pos);
    return (n & mask);
}

int main()
{
    int n,i;
    cin>>n>>i;
    cout<<clearbit(n,i)<<endl;
    return 0;
}