#include <iostream>
using namespace std;

int factorial(int n){
    if (n == 0)
    {
        return 1;
    }
    int prevfact=factorial(n-1);
    return n*prevfact;
    
    // Working of this function 
    // factorial(4)=4*factorial(3)
    // factorial(3)=4*3*factorial(2)
    // factorial(2)=4*3*2*factorial(1)--->4*3*2*1

    
}
int main(){
int a;
cout<<"Enter the NUMBER"<endl;
cin>>a;
cout<<factorial(a)<<endl;
return 0;
}
//when a function call itself to make the problem smaller is called Recursion 