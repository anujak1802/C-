#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    cin.ignore();
    char arr[n+1];
    cin.getline(arr,n);
    cin.ignore();

    int currLen=0,maxLen=0,i=0;
    int st=0,maxSt=0;
    while(i<n)
    {
        if(arr[i]==' ' || arr[i]=='\0')
        {
            if(currLen>maxLen)
            {
                maxLen=currLen;
                maxSt=st;
            }
            currLen=0;
            st=i+1;
        }
        else{
            currLen++;
        }
        
        if(arr[i]=='\0')
        {
            break;
        }
        i++;
    }

    cout<<maxLen<<endl;
    for(int j=0;j<maxLen;j++)
    {
        cout<<arr[j+maxSt];
    }
    cout<<endl;
    return 0;
}