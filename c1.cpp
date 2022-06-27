#include <bits/stdc++.h>
#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>
using namespace std;
int main(int argc, char *a[])
{
    //Write code here
    int t;
    cin>>t;
    while(t--)
    {
        int n,g;
        int arr[g];
        cin>>n>>g;
        for(int i=0;i<g;i++)
        {
            cin>>arr[i];
        }
        sort(arr,arr + g);
        int ans=0;
        for(int i=0;i<n;i++){
            ans=ans+arr[i];
        }
        cout<<ans<<endl;
    }
    return 0;
}