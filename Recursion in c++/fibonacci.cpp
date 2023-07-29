#include <iostream>
using namespace std;
int fib(int n){
    if (n<2)
    {
        return 1;
    }
    return fib(n-2)+fib(n-1);
    
}
int main(){
int n;
cout<<"Enter The Number "<<endl;
cin>>n;
cout<<fib(n);
return 0;
}