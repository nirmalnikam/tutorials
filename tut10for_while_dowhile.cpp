#include <iostream>
using namespace std;
int main (){
    
    /* For Loop in C++:
    There are three type of loop in c++:
    1. For Loop
    2.While loop
    3.do-while loop 
    */

   /* For Loop in C++:*/

//Syntax for , for loop
//for(initialization; condition; updation)
// {
//     loop body (c++code)
// }
    for( int i=0; i<=100; i=i+2)
    {
        cout<<i;
    }
    /* WhileLoop in C++:*/
    //suntax:while(condition)
    // {
    //     c++ statement
    // }
    int i=1;
    while(i<=40){
        cout<<i<<endl;
        i++;
    }
/* do-while Loop in C++:*/
    //syntax:do
    // {
    //     c++ statement;
    // }while (condition);

    int i=0;
    do
    {
        cout<<i<<endl;     // ek baar loop chalega hi.
        i=i+6; 
    } while (i<=60);


  
    return 0;

}