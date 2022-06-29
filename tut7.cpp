#include <iostream>
using namespace std;

int c=55;

int main()
{//********************** Built In Data Types*************************************
    // int a, b, c;
    // cout<<"Enter the value of a "<<endl;
    // cin>>a;
    // cout<<"Enter the value of b "<<endl;
    // cin>>b;
    // c= a+b ;
    // cout<<"The sum is "<<c<<endl;
    // cout<<"The global value of c is " <<::c ;  /*'::'<--isa scope resolution operator
    //                                                 used to call global variables*/


//************************float, double, long double Litterals 
    // float d=34.4f;                                          //a random value 33.4is saved as double by default.
    // long double e=34.4l;                                    //so to name it we use 'f' or 'l' for naming
    //                                                         //it as float ot long double.
    
    // cout<<"value of d is "<<d<<endl<<"value of e is "<<e<<endl;
    
    // cout<<"size of 34.4f is "<<sizeof(34.4f)<<endl; 
    // cout<<"size of 34.4F is "<<sizeof(34.4F)<<endl; 
    // cout<<"size of 34.4l is "<<sizeof(34.4l)<<endl; 
    // cout<<"size of 34.4L is "<<sizeof(34.4L)<<endl; 
    // cout<<"size of 34.4 is "<<sizeof(34.4)<<endl; 
//  ***************************** Reference Variables************************
//  Rohan Das<--- Monty<---Dangerous coder
    // float Rohan=007;
    // float & Monty=Rohan;
    // cout<<Rohan<<endl;
    // cout<<Monty<<endl; 

//******************************* Typecasting*******************************

    int a=45;
    float b=45.46;
    cout<<"The value of a is "<<(float)a<<endl;
    cout<<"The value of a is "<<float(a)<<endl;
    
    cout<<"The value of b is "<<int(b)<<endl;
    cout<<"The value of a is "<<(float)b<<endl; 

    int c= int (b);
    cout<<"The expression is "<< a + b<<endl;
    cout<<"The expression is "<< a + int(b) <<endl;
    cout<<"The expression is "<< a + (int)b <<endl;


    return 0;
}
