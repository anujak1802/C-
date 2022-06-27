#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,k;
    cin>>n>>k;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int low=0;
    int high=n-1;
    while(low<high)
    {
        if(a[low]+a[high]==k)
        {
            cout<<low<<" "<<high;
            break;
        }
        else if(a[low]+a[high]>k){
            high--;
        }
        else{
            low++;
        }

    }
    return 0;
}