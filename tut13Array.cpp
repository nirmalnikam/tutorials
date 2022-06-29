#include <iostream>
using namespace std;

int main(){
    int marks[4]={33,24,6,33};

    cout<<marks[1]<<endl;
    cout<<marks[1]<<endl;
    cout<<marks[2]<<endl;
    cout<<marks[3]<<endl;
    cout<<marks[4]<<endl;
    cout<<marks[0]<<endl;
    //You can add values to an array
    int a[4];
    cout<<a<<endl;   // this will give no value
    a[0]=3;
    a[1]=4;
    a[2]=5;
    a[3]=6;
    cout<<a[0]<<endl;
    cout<<a[1]<<endl;
    cout<<a[2]<<endl;
    cout<<a[3]<<endl;
     // You can change value of an array
     marks[2]=55;
     cout<<marks[2]<<endl ;

     //using for loop to print array
     for (int i = 0; i < 4; i++)
     {
        cout<<"this is the valus of "<<i<<"="<<marks[i]<<endl;
     }
     
    //using while loop to print array
    int x=0;
    while( x < 4 ){
        cout<<"value of x = "<<x<<" is "<<marks[x]<<endl;
        x++;
        }

    //using  do while loop
    int y=0;
    do
    {
        cout<<"value of y = "<<y<<" is "<<marks[y]<<endl;
        y++;
    } while (y<4);
    
    //pointers and arrays
    int* p = marks;
    cout<< "the value of *p is "<<*p<<endl;
    cout<< "the value of *(p+1) is "<<*(p+1)<<endl;
    cout<< "the value of *(p+2) is "<<*(p+2)<<endl;
    cout<< "the value of *(p+3) is "<<*(p+3)<<endl;
    
// ++p --> increment before execution
// p++ --> increment after execution

    cout<< *(p++)<<endl; 
    cout<<*(p);

    return 0;
}