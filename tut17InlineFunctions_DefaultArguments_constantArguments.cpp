#include<iostream>
using namespace std;

/*

inline int product(int a, int b){
    return a*b;
}

int main(){
    int a,b;
    cout<<"Enter the value of a and b "<<endl;
    cin>>a>>b;
    cout<<"multiplication of a and b is "<<product(a,b)<<endl;
    cout<<"multiplication of a and b is "<<product(a,b)<<endl;
    cout<<"multiplication of a and b is "<<product(a,b)<<endl;
    cout<<"multiplication of a and b is "<<product(a,b)<<endl;
    cout<<"multiplication of a and b is "<<product(a,b)<<endl;
    cout<<"multiplication of a and b is "<<product(a,b)<<endl;
    cout<<"multiplication of a and b is "<<product(a,b)<<endl;




    return 0;
}*/










/*

//u cannont use inline function with static,loop,etc variable.
int product(int a, int b){
   static int c=0;  // Thos executes only once
   c=c+1; //next time this function is run and value of c is retained
    return a*b+c; 
}

int main(){
    int a,b;
    cout<<"Enter the value of a and b "<<endl;
    cin>>a>>b;
    cout<<"multiplication of a and b is "<<product(a,b)<<endl;
    cout<<"multiplication of a and b is "<<product(a,b)<<endl;
    cout<<"multiplication of a and b is "<<product(a,b)<<endl;
    cout<<"multiplication of a and b is "<<product(a,b)<<endl;
    cout<<"multiplication of a and b is "<<product(a,b)<<endl;
    cout<<"multiplication of a and b is "<<product(a,b)<<endl;
    cout<<"multiplication of a and b is "<<product(a,b)<<endl;




    return 0;
}*/






//...................default argument....................
float moneyrecieved(int currentmoney, float factor=1.04){ //agar apne koi value nahi di to argument default value se kaam chalata hai... in this case it is factor=1.04
    return currentmoney*factor;                           // default  argument right me likhte hai
}
int main(){
    int a,b;
    int money = 100000;
    cout<<"if u have "<<money<<" in ur bank account u will receive "<<moneyrecieved(money)<<" after 1 yr"<<endl;
    cout<<"For vip: if u have "<<money<<" in ur bank account u will receive "<<moneyrecieved(money,1.1)<<" after 1 yr"<<endl;

    return 0;

}




/*

//..................constant argument .......................
int strlen(const char *p){   //u cannt chane value of p becaise of "cont" argument.

}
int main(){
    return 0 ;
}
*/