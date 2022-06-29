/*
Create 2 classes:
    1. SimpleCalculator - Takes input of 2 numbers using a utility function and performs +, -, *, / and displays the results using another function.
    2. ScientificCalculator - Takes input of 2 numbers using a utility function and performs any four scientific operations of your choice and displays the results using another function.

    Create another class HybridCalculator and inherit it using these 2 classes:
    Q1. What type of Inheritance are you using? --> Multiple inheritance
    Q2. Which mode of Inheritance are you using? --->public simplecalculator, public complexcalculator
    Q3. Create an object of HybridCalculator and display results of the simple and scientific calculator.
    Q4. How is code reusability implemented?
*/
#include <iostream>
#include <cmath>
using namespace std;

class simplecalculator
{
   
private:
public:
int a, b;
    void getdatasimple(){
        
        cout<<"enter the  valus of a  and b "<<endl;
        cin>>a>>b;
    }

    void performoperationsimple(){
        cout<<"enter val of a+b = "<<a+b<<endl;
        cout<<"enter val of a-b = "<<a-b<<endl;
        cout<<"enter val of a*b = "<<a*b<<endl;
        cout<<"enter val of a/b = "<<a/b<<endl;
        cout<<"enter val of a%b = "<<a%b<<endl;
    }
};



class complexcalculator

{
    private:
public:
int a, b;
    void getdatacomplex(){
        
        cout<<"enter the  valus of a  and b "<<endl;
        cin>>a>>b;
    }

    void performoperationcomplex(){
        cout<<"enter val of cos(a) = "<<cos(a)<<endl;
        cout<<"enter val of sin(a) = "<<sin(a)<<endl;
        cout<<"enter val of exp(a) = "<<exp(a)<<endl;
        cout<<"enter val of tan(a) = "<<tan(a)<<endl;
    
    }

};

class Hybrid : public simplecalculator, public complexcalculator{

};

int main(){
// simplecalculator calcy;
// calcy.getdata();
// calcy.performoperation();

Hybrid calcy;
calcy.getdatacomplex();
calcy.performoperationcomplex();
calcy.getdatasimple();
calcy.performoperationsimple();

    return 0;
}
