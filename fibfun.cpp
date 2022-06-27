#include <bits/stdc++.h>
using namespace std;

void fib(int n){
    int t1=0,t2=1;
    for(int i=1;i<=n;i++){
        int t3;
        t3=t2+t1;
        cout<<t1<<" ";
        t1=t2;
        t2=t3;

    }
}

int main()
{
    int n;
    cin>>n;
    fib(n);
    return 0;
}