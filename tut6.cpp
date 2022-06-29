// There are two types of heder files:
// 1.System header files: Which comes with compiler.
#include<iostream>
// 2.User defined heaer files: Which are defined by user.
// #include "this.h"--> This will produce error if this file is not present in directory 
using namespace std;
int main()
{   int a=4, b=5;
     cout<<"Types of operator in c++"<<endl;
     //Arithematic Operator
     cout<< "Value of a+b is "<<(a+b)<<endl;
     cout<< "Value of a-b is "<<(a-b)<<endl;
     cout<< "Value of a*b is "<<(a*b)<<endl;
     cout<< "Value of a/b is "<<(a/b)<<endl;
     cout<< "Value of a++ is "<<(a++)<<endl;
     cout<< "Value of a-- is "<<(a--)<<endl;
     cout<< "Value of ++a is "<<(++a)<<endl;
     cout<< "Value of --a is "<<(--a)<<endl;
     cout<<endl;


     //Assign Operator--> Used to assign values to operator
     // a=1, b=3;
     //char d='d';

     //Comparison operator
     cout<<"Following are comparison operator:"<<endl;
     cout<<"The value of a==b is: "<<(a==b)<<endl;
     cout<<"The value of a!=b is: "<<(a!=b)<<endl;
     cout<<"The value of a>=b is: "<<(a>=b)<<endl;
     cout<<"The value of a<=b is: "<<(a<=b)<<endl;
     cout<<"The value of a>b is: "<<(a>b)<<endl;
     cout<<"The value of a<b is: "<<(a<b)<<endl;
     cout<<endl;

     //Logical Operator
     cout<<"Following are logical operator: "<< endl;
     cout<<"Value of 'and' operator ((a==b)&&(a<b)) is: "<<((a==b)&&(a<b))<<endl;
     cout<<"Value of 'or' operator ((a==b)||(a<b)) is: "<<((a==b)||(a<b))<<endl;
     cout<<"Value of 'not' operator (!(a==b)) is: "<<(!(a==b))<<endl;


    return 0;
}
