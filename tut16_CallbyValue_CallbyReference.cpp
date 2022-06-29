  #include<iostream>
using namespace std;
/*.............this will not swap a,b................
void swap (int a, int b){  //temp a b
    int temp=a;            // 5   5 6
    a=b;                   // 5   6 6  
    b=temp;                // 5   6 5

}
int main(){ 
    int a=4 , b=5;
    cout<<"the value of a is "<<a<<"the value of b is "<<b<<endl;
    swap(a,b);
    cout<<"the value of a is "<<a<<"the value of b is "<<b<<endl;
     
    return 0;
}*/




/*
//call by reference using pointer
void swapPointer (int* a, int* b){  //temp a b
    int temp=*a;            // 5   5 6
    *a=*b;                   // 5   6 6  
    *b=temp;                // 5   6 5

}
int main(){ 
    int a=4 , b=5;
    cout<<"the value of a is "<<a<<"the value of b is "<<b<<endl;
    swapPointer(&a,&b);
    cout<<"the value of a is "<<a<<"the value of b is "<<b<<endl;
     
    return 0;
}*/




/*
//call by reference using c++ reference variable
void swapreferenceVar (int &a, int &b){  //temp a b
    int temp=a;            // 5   5 6
    a=b;                   // 5   6 6  
    b=temp;                // 5   6 5

}
int main(){ 
    int a=4 , b=5;
    cout<<"the value of a is "<<a<<"the value of b is "<<b<<endl;
    swapreferenceVar(a,b);
    cout<<"the value of a is "<<a<<"the value of b is "<<b<<endl;
     
    return 0;
}*/


//call by reference using c++ return by reference 
int & swapreferenceVar (int &a, int &b){  //temp a b
    int temp=a;            // 5   5 6
    a=b;                   // 5   6 6  
    b=temp;                // 5   6 5
    return a;
}
int main(){ 
    int a=4 , b=5;
    cout<<"the value of a is "<<a<<"the value of b is "<<b<<endl;
    swapreferenceVar(a,b)=666999;
    cout<<"the value of a is "<<a<<"the value of b is "<<b<<endl;
     
    return 0;
}