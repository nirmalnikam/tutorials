#include <iostream>
using namespace std;
class Employee{
    int id;
    static int count;
    // static int count=1000; will give syntax error
    public:
    void setData(void){
        cout<<"enter the id "<<endl;
        cin>>id;
        count++;
    }
    void getData(){
        cout<<"id of employee is "<< id<<"and this is employee no "<< count<<endl;

    }
    static void getcount(void){
        //cout<<id;   throws an error
        cout<<"The value of count is "<<count<<endl;
    }
};

int Employee::count;  //Default value is 0
// int Employee::count=1000;  //Default value is 1000 will not give syntax error

int main(){
    Employee nirmal;
    Employee aditya;
    Employee achut;
    
    // nirmal.id=1;
    // nirmal.count=1;      cannot do this as id and count are private.

    nirmal.setData();
    nirmal.getData();
    Employee::getcount();

    aditya.setData();
    aditya.getData();
    Employee::getcount();

    achut.setData();
    achut.getData();
    Employee::getcount();

    return 0;
}