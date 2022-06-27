#include <iostream>
#include <string>
using namespace std;
class laptop
{
    public:
    string name;
    string brand;
    float price;
    string processor;

    void getdata()
    {
        cout<<"Name: ";
        cin>>name;
        cout<<"Brand: ";
        cin>>brand;
        cout<<"Price: ";
        cin>>price;
        cout<<"Processor: ";
        cin>>processor;
    }

    void showdata()
    {
        cout<<"Name: "<<name<<"\nBrand: "<<brand<<"\nPrice: "<<price<<"\nProcessor: "<<processor<<endl;
    }
    void startup()
    {
        cout<<"Laptop "<<name<<" has started";
    }
    void shutdown()
    {
        cout<<"Laptop "<<name<<" has shutting down";
    };
};

int main()
{
    laptop laptop1;
    laptop1.getdata();
    laptop1.showdata();
    laptop1.startup();
    return 0;
}