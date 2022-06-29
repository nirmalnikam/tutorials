#include <iostream>
using namespace std;
int main(){
    //What is pointer?---> data type which holds the address of other data type
     
    int a=3;
    int * b = &a;               //int* b =&a;
    //                            '---->  pointer variable jiska naam b hai, jo ki address of a hold karta ho
   //&---->Address of operator
    cout<<"the address of a is "<<&a<<endl;
    cout<<"the address of a is "<<b<<endl;


 
    //*---->(value ay operator) Dereference  operator
    cout<<"the value at address b is "<<*b<<endl; // b pe konsi value stored hai?
    //Pointer to pointer
    int** c = &b;
    cout<<"The address of b is "<<&b<<endl;
    cout<<"The address of b is "<<c<<endl;
    cout<<"The value at address c is "<<*c<<endl;
    cout<<"The value at address value_at(value_at(c)) is "<<**c<<endl;

    return 0;
}