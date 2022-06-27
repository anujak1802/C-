#include <bits/stdc++.h>
using namespace std;

int getbit(int n,int pos)
{
    return ((n & (1<<pos))!=0);
}

int main()
{
    int n,i;
    cin>>n>>i;
    cout<<getbit(n,i)<<endl;
    return 0;
}