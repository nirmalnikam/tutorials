#include <iostream>
using namespace std;
int main(){
    for (int i = 0; i < 40; i++)
    {
        cout<<i;
        if(i==30){
            break;
        }
    }

    cout<<endl;
    for(int i = 0; i < 40; i++)
    {   

        if (i==30){
            continue;
        }
        
        cout<<i<<endl;
    }
    
    
    return 0;
}