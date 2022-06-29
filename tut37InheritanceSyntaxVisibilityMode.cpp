#include<iostream>
using namespace std;

//base class
class employee{
    int id;
    float salary;
    employee(int intId){
        id = intId;
        salary=34.0;
    }
    employee() {}
};

//Derived class syntax

//derived class 
/*class {{derived-class-name}} : {{visibility-mode}} {{base-class-namespace}}
{
    class members/methods/etc...
}
Note: 
1.default visibility mode is private
2.Public visibility mode: Plublic member of base class becomes public member of derived class
3.Private visibility mode: Plublic member of base class becomes private member of derived class
4.Private member are never inheriited
 */

//Creating a programmer base class derived from employee base class

class programmer : public employee
{
    public:
    programmer(int inpId){
        id =inpId;
    }
    int languagecode=9;
    void getData(){
        cout<<id<<endl;
    } 
};



int main(){

    employee harry(1),rohan(2);
    cout<<harry.salary<<endl; 
    cout<<rohan.salary<<endl; 
    programmer skillF(10);
    cout<<skillF.languagecode<<endl;
    cout<<skillF.id<<endl;
    skillF.getdata();
    return 0;
}