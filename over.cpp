#include <iostream>
using namespace std;
void run()
{
    cout<<"Run is running"<<endl;
}
void run(int a)
{
    cout<<"Run with int "<<a<<"is running";
}
int main()
{
    run();
    run(5);
    return 0;
}