/*
syntax for initialization list in constructor:
constructor (argument-list) : initialization-section
{
    assignment +other code;
}
 */
#include <iostream>
using namespace std;
class Test 
{
    int a;
    int b;

    public:
    Test(int i , int j)
    // Test(int i , int j): a(i),b(j)
    // Test(int i , int j): a(i),b(i+j)
    // Test(int i , int j): a(i),b(2*j)
    // Test(int i , int j): a(i),b(a+j)
    // Test(int i , int j): b(j),a(i+b)--> RED FLAG this will create problem as a will be initialized first

    {
        a=i;
        b=j;
        cout<<"Constructor executed"<<endl;
        cout<<"value of a is "<<a<<endl;
        cout<<"value of b is "<<b<<endl;
    }
};
#include<iostream>
using namespace std;
int main(){
   
    Test t(4,6);

    return 0;
}