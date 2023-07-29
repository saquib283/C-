#include <iostream>
using namespace std;
class Base1{
    int data1;
    public:
    Base1(int i){
        data1=i;
    }
    void Display(){
        cout<<"Displaying Base 1 Data 1"<<endl;
    }
};
class Base2{
    int data2;
    public:
    Base2(int i){
        data2=i;
    }
    void Display(){
        cout<<"Displaying Base 2 Data 2"<<endl;
    }
};

class Deriverd :public Base1 , public Base2{
    int derived;
    public:
    Deriverd(int a , int b , int c ):Base1(a),Base2(b){
        derived=c;
        cout<<"In Derived Constructor"<<endl;
    }
    void Display(){

        cout<<"The Value Of Derived Data Member "<<derived<<endl;
    }
};
int main(){
    Deriverd rehan(2,6,7);
    rehan.Display();
    
 
return 0;
}