#include <iostream>
using namespace std;
class Complex
{
    int a, b;

public:
    Complex(void);
    void printNumber();
};
void Complex :: printNumber(){
    cout<<"Tera Output Hai "<<a<< "+" <<b<<endl;
}
 Complex :: Complex(void){
    a=5;
    b=7;
}
int main()
{
    Complex cpx;
    cpx.printNumber();

    return 0;
}