#include <iostream>
using namespace std;

int sum(int a , int b){
    int c = a+b;
    return c;
}
//call by reference using pointers
void swapPointer(int* x  , int* y ){
    int temp=*x;
    *x=*y;
    *y=temp;
}

//call by reference using refernce variable
void swapReference(int &x  , int &y ){
    int temp=x;
    x=y;
    y=temp;
}

int main(){
// cout<<"The sum of 4 and 5 is "<<sum(4,5)<<endl;
int a=5;
int b=7;
cout<<"The Value of A and B before swaapping is "<<a<<" "<<b<<endl;
// swapPointer(&a,&b);//Swap Ussing pointer reference
swapReference(a,b);//swap using reference variable
cout<<"The Value of A and B After swaapping is "<<a<<" "<<b<<endl;



return 0;
}