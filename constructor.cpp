#include <iostream>
#include <string.h>

using namespace std;

class laptop
{
    public:
    string name;
    float price;
    laptop()
    {
        cout<<"Name : "<<name<<endl<<"Price : "<<price<<endl;
    }

    laptop(string lname, float lprice)
    {
        //strcpy(name," Dell");
        name=lname;
        price=lprice;
        cout<<"Name : "<<name<<endl<<"Price : "<<price<<endl;
    }
    laptop(const laptop &p)
    {
        //strcpy(name," Dell");
        name=p.name;
        price=p.price+200.5;
        cout<<"Name : "<<name<<endl<<"Price : "<<price<<endl;
    }
    ~laptop()
    {
        cout<<"Destruting "<<price<<endl;
    }
    

};
int main()
{
    laptop l;
    laptop m("Dell", 100.0);
    laptop k=m;
    return 0;
}