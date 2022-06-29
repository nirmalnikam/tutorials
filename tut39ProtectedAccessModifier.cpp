#include<iostream>
using namespace std;

class Base{
protected:
int a;
public:  
int b;
};

/*for a protected number:

                 public derivation       private derivation        protected derivation
1.private         not inherited             not inherited              not inherited
2.protrcted        protected                   private                   protected
3.public           public                      private                   protected

*/

class derived : protected Base{

};

int main(){
    Base b;
    derived d;
    // cout<<d.a;  this will not work as it is protected in both derived and base class

    return 0;
}