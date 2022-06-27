#include <iostream>
#include <math.h>
using namespace std;

int firstd(int num)
{
    int digits=log10(num);
    return num/pow(10,digits);
}
int main()
{
    int arr[100000];
    int size;
    cin>>size;
    for(int i=0;i<size;i++)
    {
        cin>>arr[i];
    }
    int first=0, second=0;
    for(int i=0;i<size;i++)
    {
        if(((i%2)==0) && i<(size/2))
            first+=firstd(arr[i]);
    
        if(((i%2)==0) && i<=(size/2))
            first+=arr[i]%10;
        

        if(((i%2)==1) && i<(size/2))
            second+=firstd(arr[i]);
        
        if(((i%2)==1) && i<=(size/2))
            second+=arr[i]%10;
        

    }
    if((first-second)%11 == 0)
    {
        cout<<"OUI";
    }
    else
    {
    cout<<"NON";
    }
    return 0;
}