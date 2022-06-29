#include <iostream>
using namespace std;
 class Simple {
    int data1;
    int data2;
    int data3;
    public:
    Simple( int a,int b=8,int c=4){
        data1=a;
        data2=b;
        data3=c;

    }
    void printData();

 };

 void Simple :: printData(){
     cout<<"valure of data1, data2, data3 is "<<data1<<"and"<<data2<<"and"<<data3<<endl;
 }

 int main(){
     Simple q(3,3);
     q.printData();
     return 0;
 }