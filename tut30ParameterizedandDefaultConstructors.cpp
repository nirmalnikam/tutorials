#include<iostream>
using namespace std;

class Complex
{
    int a, b;

public:
    Complex(int , int); // constructor declaration
    void printNumber()
    {
        cout << "your no is " << a << " + " << b << "i" << endl;
    }
};
Complex ::Complex(int x , int y)//-----> this is parameterised constructor as it takes no parameter
{
    a = x; 
    b = y;

    // cout<<" HELLO WORLD ";
}

int main(){
    //Implicit call
    Complex a(4,6);

    // Explicit call
    Complex b= Complex(5,7); 
    a.printNumber(); 
    b.printNumber();
    
    return 0;
}