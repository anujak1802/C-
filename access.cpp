#include <iostream>
#include <string>

using namespace std;

class laptop
{
    private:  
    string name;
    protected:
    float price;
    
    public:
    laptop()
    {
        name="Dell";
        price=100.0;
    }
    void show()
    {
        cout<<"Name : "<<name<<endl<<"Price : "<<price<<endl;
    }

};

int main()
{
    laptop lap;
    lap.show();
    return 0;
}