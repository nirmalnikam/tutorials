#include <iostream>
using namespace std;
//Forward declaration
class complex;

class Calculator{
        public:
            int add(int a, int b){
                return (a+b);
            }
            int sumRealComplex(complex o1, complex o2);
                
            
           
    };

class complex
{
    int a, b;
    friend int Calculator:: sumRealComplex(complex o1, complex o2);
public:
    void setNumber(int n1, int n2)
    {
        a = n1;
        a = n2;
    }

    void printNumber()
    {
        cout << "your no is " << a << " + " << b << "i" << endl;
    };

     int Calulator:: sumRealComplex(complex o1, complex o2){
                return (o1.a+o2.a);
            }

int main(){
    complex o1,o2; 
    o1.setNumber(2,3); 
    o1.setNumber(3,4);
    Calculator calc;
    int result= calc.sumRealComplex(o1,o2);
    cout<<"sum of real part is "<<result<<endl;
    return 0;
}
   