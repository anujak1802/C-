#include <iostream>
using namespace std;
void change(int no)
{
    no=no*no;
    cout<<"Value in Function: "<<no<<endl;
}
int main()
{
    int n;
    cout<<"Enter value: ";
    cin>>n;
    change(n);
    cout<<"Value in main: "<<n<<endl;

    return 0;
}