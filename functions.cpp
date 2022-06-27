#include <iostream>
using namespace std;

int pow(int no,int po)
{
    int ans=1;
    for(int i=0;i<po;i++)
    {
        ans=ans*no;
    }
    return ans;

}

int main()
{   
   int n,p,answer;
    cout<<"Enter no.:";
    cin>>n;
    cout<<"Enter power:";
    cin>>p;
    cout<<"Answer is:"<<pow(n,p)<<endl;
    return 0;
}