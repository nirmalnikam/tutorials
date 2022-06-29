#include<iostream>
using namespace std;
int sum(int a,int b){
    cout<<"sum with 2 argument"<<endl;
    return a+b;
}

int sum(int a,int b,int c){
    cout<<"sum with 3 argument"<<endl;
    return a+b+c;
}

//cuboid
int volume(int l ,int b,double h){
    return (l*b*h);

}
//cylinder
int volume(int r, double h){
    return (3.14*r*r*h);
}


int main(){
    int a,b,c,l;
    double h;
    cout<< "the sum of a and b is "<<sum(3,4)<<endl;
    cout<< "the sum of a, b and c is "<<sum(3,4,7)<<endl;
    cout<< "the vol of cuboid is "<<volume(3,4,7)<<endl;
    cout<< "the vol of cylinder is "<<volume(3,4)<<endl;
    
    return 0;
}