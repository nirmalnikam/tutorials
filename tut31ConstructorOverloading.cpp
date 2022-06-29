#include <iostream>
#include <math.h>   
using namespace std;

class Complex{
    int a,b;
    public:
    Complex(){                  //default constructor
        a=0;
        b=0;
    }
    Complex(int x, int y){      //parameterised constructor
        a=x;
        b=y;
    }
    Complex(int x){             //parameterised constructor
        a=x;
        b=0;
    }
    void printNumber(void){
        cout<<"the no is "<<a<<"+"<<b<<"i"<<endl;

    }
};

int main(){
    Complex c1;
    c1.printNumber();
    
    Complex c2(2,4);
    c2.printNumber();
    
    Complex c3(2);
    c3.printNumber();
    
    Complex c4(0,3);
    c4.printNumber();
    
    return 0;
}