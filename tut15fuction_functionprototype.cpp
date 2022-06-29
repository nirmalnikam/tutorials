#include <iostream>
using namespace std;
/*...............function................
int sum( int a, int b){

   int c=a+b;

   return c;

}

int main(){
    int n1 , n2;

    cout<<"enter n1 "<< endl;
    cin>> n1 ;
    cout<<"enter n2 "<< endl;
    cin>>n2 ;
    cout<<"sum= "<<sum(n1, n2);
  
    return 0;
}*/


//.......... Function Prototype..........   -----> it gives assurity ki jake dekho niche ye function bataya hua hai.
//syntax: type function_name(argument);
// int sum(int a, int b);----> acceptable
// int sum( a, b);----> not acceptable
int sum(int , int );   //----> acceptable
void g();
int main(){
    int n1 , n2;

    cout<<"enter n1 "<< endl;
    cin>> n1 ;
    cout<<"enter n2 "<< endl;
    cin>>n2 ;
    // n1, n2 are actual parameter
    cout<<"sum= "<<sum(n1, n2);
    g();
    return 0;
}

int sum( int a, int b){
//Formal parameter a,b will be taking values of actual parameter n1,n2
   int c=a+b;

   return c;

}

void g(){
    cout<<"\n Hello Good Morning ";
}