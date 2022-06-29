#include <iostream>
using namespace std;
class BankDeposit{
    int principle;
    int years;
    float intrestRate;
    float returnValue;

    public:
    BankDeposit(){}
    BankDeposit(int p, int y, int r);   //r can be value like 14
    BankDeposit(int p, int y , float r);  // r can be value like 0.004
    void show();
};

BankDeposit :: BankDeposit(int p, int y, float r){

    principle = p;
    years = y;
    intrestRate = r;
    returnValue = principle;

    for (int i = 0; i < y; i++)
    {
        returnValue = returnValue * (1+intrestRate);
    }
    
}

BankDeposit ::BankDeposit(int p, int y, int r){
     
    principle = p;
    years = y;
    intrestRate = float (r)/100;
    returnValue = principle;

    for (int i = 0; i < y; i++)
    {
       returnValue = returnValue * (1+ intrestRate);
    }
}



void BankDeposit :: show(){
    cout<<"summery\nprinciple= "<< principle <<"\n interest = "<< intrestRate << "\n years= " << years << "\n return value = "<< returnValue;
}


int main(){
    BankDeposit bd1 , bd2 , bd3 ;
    int p ,y ;
    float r ;
    int R ;
    cout<<"enter p y r";
    cin>> p>>y>>r;
    bd1 = BankDeposit (p,y,r);
    bd1.show();
   
    cout<<"enter p y R";
    cin>> p>>y>>R;
    bd2 = BankDeposit (p,y,R);
    bd2.show();



    return 0;
}