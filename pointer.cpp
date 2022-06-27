#include <iostream>
using namespace std; 
int main()
{
    int x=5;
    int *p=&x;
    cout<<"Address of "<<x<<" is "<<p<<" or "<<&x;
    return 0;
}