#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int arr[n];
    for (int i =0;i<n;i++){
        cin>>arr[i];
    }
    int sum=0;
    int arr1[n];
    for(int i=0;i<n;i++){
        sum+=arr[i];
        arr1[i]=sum;
    }
    int start=arr[0];
    int end=arr[1];
    int max=0,curr=0;
    while(start<end){

    }
    
    return 0;
}