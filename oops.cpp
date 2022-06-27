#include <bits/stdc++.h>
using namespace std;

class Student{
    public:
    string name;
    int age;
    bool gender;

    void printInfo(){
        cout<<"Name= ";
        cout<<name<<endl;
        cout<<"Age= ";
        cout<<age<<endl;
        cout<<"Gender= ";
        cout<<gender<<endl;
    }
};

int main(){
    int n;
    cin>>n;
    Student arr[n];
    for(int i=0;i<n;i++){
        cout<<"Name: ";
        cin>>arr[i].name;
        cout<<"Age: ";
        cin>>arr[i].age;
        cout<<"Gender: ";
        cin>>arr[i].gender;
    }
    for(int i=0;i<n;i++){
        arr[i].printInfo();
    }
    return 0;
}
    