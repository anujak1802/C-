#include<iostream>
using namespace std;

bool isPrime(int n)
{
    if (n<=2)
    return true;
    for(int i=2;i*i<=n;i++)
    {
        if(n%i==0)
        return false;
    }
    return true;
}

int main()
{
    int n;
    cout<<"Enter no. to be checked: ";
    cin>>n;
    if(isPrime(n))
    {
        cout<<n<<" is a Prime No."<<endl;
    }
    else{
        cout<<n<<" is NOT a Prime No."<<endl;
    }
    return 0;
}