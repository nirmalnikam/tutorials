#include<iostream>
using namespace std;

class Base{
    int data1; //private by default... cannot be inheritable
    public:
    int data2;
    void setData();
    int getData1();
    int getData2();

};

void Base :: setData(void){
    data1=10;
    data2=20;

}

int Base::getData1(){
    return data1;
}

int Base::getData2(){
    return data2;
}

class Derived : public Base{ //class is being derived publically

    int data3;
    public:
    void Process();
    void display();


};

void Derived::Process(){
    data3=data2*getData1();
}

void Derived::display(){
    cout<<"value of Data1 is "<<getData1()<<endl;
    cout<<"value of Data2 is "<<data2<<endl;
    cout<<"value of Data3 is "<<data3<<endl;
}

int main(){

    Derived der;
    der.setData();  
    der.Process();  
    der.display();  

    return 0;
}