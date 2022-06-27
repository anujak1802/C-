#include<iostream>
using namespace std;
int main()
{
    int a=0;
    while(a<10)
    {
        a++;
        if(a==5)
        break;//continue stops the statement and returns to the initial position and break statement stops the whole code
        cout <<a<<endl;
                  
    }
    return 0;
}