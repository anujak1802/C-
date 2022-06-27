#include <bits/stdc++.h>
using namespace std;

//first we use clear bit and then set bit

int updatebit(int n,int pos,int value)
{
    int mask=~(1<<pos);
    n=n&mask;
    return (n | value<<pos);
}

int main()
{
    int n,i,value;
    cin>>n>>i>>value;
    cout<<updatebit(n,i,value);
    return 0;
}