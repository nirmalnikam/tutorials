//examples  one by one

#include <iostream>
using namespace std;

class Y;    // i have to forward declare it otherwise it wil show error as not declared in during friend function

class X{
    int data;
    public:
        void setValue (int value){
            data = value;
        }
    friend void add (X,Y);
};

class Y{
    int num;
    public:
        void setValue (int value){
       num= value;
    }
    friend void add (X,Y);
};

void add(X o1, Y o2){
    cout<<"summing data of X and Y gives me "<< o1.data + o2.num;

}


int main(){
    X a1;
    a1.setValue(3);

    Y b1;
    b1.setValue(3);
    add (a1, b1);
    return 0;
}
