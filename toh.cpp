#include <bits/stdc++.h>
using namespace std;

void towerofHonai(int n,char src, char dest,char helper)
{
    if(n==0)
    {
        return;
    }
    towerofHonai(n-1,src,helper,dest);
    cout<<"Move from "<<src<<" to "<<dest<<endl;
    towerofHonai(n-1,helper,dest,src);
}

int main()
{
    int n;
    char src,helper,dest;
    cin>>n>>src>>helper>>dest;
    towerofHonai(n,src,helper,dest);
    return 0;
}