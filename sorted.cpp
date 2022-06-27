#include <bits/stdc++.h>
using namespace std;

bool sorted(int arr[],int n)
{
    if(n==1)
    {
        return true;
    }
    bool restArr=sorted(arr+1,n-1);
    return (arr[0]<arr[1] && restArr);
}

int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<sorted(arr,n)<<endl;
    return 0;
}