#include <bits/stdc++.h>
using namespace std;

int first(int arr[],int n,int i,int key){
    
    if(i==n)
    {
        return -1;
    }
    if(arr[i]==key)
        return i;

    return first(arr,n,i+1,key);
}

int last(int arr[],int n,int i,int key){
    if(i==n)
    {
        return -1;
    }
    int restArr=last(arr,n,i+1,key);
    if(restArr!=-1){
        return restArr;
    }
    if(arr[i]==key){
        return i;
    }
    return -1;
}

int main()
{
    int n, key;
    cin>>n>>key;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<first(arr,n,0,key)<<endl;
    cout<<last(arr,n,0,key)<<endl;
    return 0;
}