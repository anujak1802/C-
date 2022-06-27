#include <bits/stdc++.h>
using namespace std;

bool ispoerof2(int n){
    return (n && !(n & n-1));
}

int main()
{
    int n;
    cin>>n;
    cout<<ispoerof2(n);
    return 0;
}