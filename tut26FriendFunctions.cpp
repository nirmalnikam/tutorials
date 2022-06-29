#include<iostream>
using namespace std;
class complex{
    int a,b;
    public:
    friend complex sumComplex( Complex o1, Complex o2);//thus line means that non member - sumComplex function is allowed to do anything withmy private parts(members)
    void setNumber(int n1, int n2){
        a=n1;
        a=n2;
    }

    void printNumber(){
        cout<<"your no is "<<a<<" + "<<b<<"i"<<endl;

    };

    complex sumComplex(complex o1, complex o2){
        Complex o3;
        o3.setNumber((o1.a+o2.a),(o1.b,o2.b));
        return o3;
    }
}
int main(){
    complex c1,c2,sum;
    c1.setNumber(1,4);
    c1.printNumber();

    c2.setNumber(5,8);
    c2.printNumber();
    
    sum=sumComplex(c1,c2);
    sum.printNumber();
    return 0;
}

/*
Propertise of friends function
1.Not in the scope of class
2.since it is not in the scope of class it cannot be called 
in the scope of that class. c1.sumComplex()==Invalid
3.it can be invoked without the help of any object
4.usually contains projects as arguments
5.can be declared inside public or private section of class
it cannot accece the member directly by their name and need object_name.member_name to accese any member
*/