#include<iostream>
using namespace std;

//destructor never takes an argument and never returns any value

int count=0;

class num{
    public:  
    num(){
        count++;
        cout<<"this is the time when constructor is called for object number"<<count<<endl;
    } 
    
    ~num(){
       
        cout<<"this is the time when destroyer is called for object number"<<count<<endl;
        count--;
    }

};

int main(){
    cout<<"we are inside our main funtion"<<endl;
    cout<<"creating first object"<<endl;
    num n1;
    {
    cout<<"entering this block "<<endl;  
    cout<<"creatinfg two more objects"<<endl;
    num n2,n3;  
    cout<<"exiting this block"<<endl;  
    }

    cout<<"back to main"<<endl;


    return 0;
}