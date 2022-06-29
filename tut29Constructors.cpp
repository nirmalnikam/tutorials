#include <iostream>
using namespace std;

class Complex
{
    int a, b;

public:
    // creating a constructor
    // constructor is a special member function with same name as of the class
    // it is used to initialize the object of its class
    //  it is automatically invoked whenever an object is created
    Complex(void); // constructor declaration
    void printNumber()
    {
        cout << "your no is " << a << " + " << b << "i" << endl;
    }
};

Complex ::Complex(void)
{
    a = 10; 
    b = 0;

    // cout<<" HELLO WORLD ";
}

int main()
{
    Complex c1,c2,c3;
    c1.printNumber();
    c2.printNumber();
    c3.printNumber();

    return 0;
}

// characteristics of constructor:

// 1. it should be declared in public section of the class 
// 2. they are automaticall invoked whenever the object is created (see commnented HELLO WORLD)
// 3. they cannot have return values and do not have return types
// 4. it can have default arguments
// 5. we cannot refer to their address