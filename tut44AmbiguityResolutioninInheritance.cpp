#include <iostream>
using namespace std;

class Base1{
     public:
    void greet(){
        cout<<"How are You?"<<endl;
    }

};

class Base2{
    public:
    void greet(){
        cout<<"kaise ho aap?"<<endl;
    }
};

class Derived:public Base1,public Base2{
    int a;
    public:
    void greet(){
        Base1::greet();  
    }
};

class B{
    public :
    void say(){
            cout<<"hello world"<<endl;
    }
};

class D:public B{
   int a;
   //D's new say()method will override base class say()method
   
    public :
    void say(){
            cout<<"hello my beautiful people"<<endl;
    }
};


int main(){
// Ambibuity 1
// Base1 base1obj;
// Base2 base2obj;
// base1obj.greet(); 
// base2obj.greet(); 
// Derived d;
// d.greet(); 

//Ambibuity 2

    B b;
    b.say();

    D d;
    d.say();
      
     
    return 0;
}