 //OOPs - Classes and objects
    
    //C++-->onotoally called-->C with classes by stroustrop
    //classes --> extension of structures in c
    //structure has limitation
    //           -members are public
    //           -No methods
    //Classes structure + more
    //Classes -->can have method and properties
    //classes -->can make few member as private and few as public
    // structures in C++ are typedefed
    //you can declare onjects along with class declaration

    /* Class employee{
            //class definition
    } harry,rohan,lovish; */
    //harry.salary=8   makes no sence if salary is private.

    //Nesting of member function

#include<iostream>
#include<string>
using namespace std;

class binary{
        string s;

public:
    void read (void);
    void chk_bin(void);
    void once_complement(void);
    void display(void);
}; 

void binary :: read(void)
{
    cout<<"enter a binary no"<<endl;
    cin>>s; 
}

void binary :: chk_bin(void){
    for (int i = 0; i < s.length(); i++)
    {
        if(s.at(i)!='0' && s.at(i)!='1'){
            cout<<"incorrect binary format"<<endl;
            exit(0);
        }
    }
    
}

void binary :: once_complement (void)
{
    for (int i = 0; i < s.length(); i++)
    {
        if( s.at(i)=='0'){
            s.at(i)='1';
        }

        else  /*(s.at(i)=='1'); --->else mei condition nahi aati*/
        {
            s.at(i)='0';
        }
    
    }
    
}


void binary ::  display (void){
    // for (int i = 0; i <s.length(); i++)
    // {
        cout<<"displaying entered no"<<endl;
        for (int i = 0; i <s.length(); i++)  {
            cout<< s.at(i);
           
        }  
         cout<<endl;
    
    // }
    
}

int main(){
   
    binary b;
    b.read();
    b.chk_bin();
    b.display();
    b.once_complement();
    b.display();
    return 0;
}