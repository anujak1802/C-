#include <iostream>

using namespace std;

void bubbleSort(int arr[],int size)
{
    int minIndex=1;
    int temp;
    while(minIndex<size-1)
    {
        for(int i=0;i<size-minIndex;i++)
        {
            if(arr[i]>arr[i+1])
            {
                int temp=arr[i];
                arr[i]=arr[i+1];
                arr[i+1]=temp;
            }
        }
        minIndex++;
    }
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

    bubbleSort(arr,n);
        for(int i=0;i<n;i++)
        {
            cout<<arr[i]<<" ";
        }
    return 0;
}