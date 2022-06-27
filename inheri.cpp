#include <iostream>
#include <string>
using namespace std;



class laptop
{
    public:
    laptop()
    {
        cout<<"Base Class 2 Called "<<endl;
    }
    string name;
    float price;

};

class gamingLaptop : public laptop
{ 
    public:
    gamingLaptop()
    {
        cout<<"Derived Class 1 Called"<<endl;
    }
    string name;
    int vram;
};
class gamingSystem : public gamingLaptop
{
    public:
    gamingSystem()
    {
        cout<<"Derived Class 2 Called"<<endl;
    }
};
int main()
{
    gamingSystem lap1;
    return 0;
}