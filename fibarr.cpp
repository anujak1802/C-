#include <iostream>
using namespace std;
int main()
{
    int arr[100],n;
    cout<<"Enter the no. of fibonacci terms:";
    cin>>n;
    arr[0]=0;
    arr[1]=1;
    cout<<arr[0]<<" "<<arr[1]<<" ";
    for (int i=2;i<n;i++)
    {
        arr[i]=arr[i-1]+arr[i-2];
        cout<<arr[i]<<" ";
    }
    /* for(int i=0;i<n;i++)
    cout<<arr[i]<<" "; */ //if u want to print full series one time
    cout<<endl;
    return 0;
}