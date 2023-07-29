 #include <iostream>
 using namespace std;
 class A{
    public:
    int a;
   virtual void Display(){
        cout<<"Displaying Baseclass "<<a;
    }
 };
  class B:public A{
    public:
    int b=14;
    void Display(){
        cout<<"Displaying Derived Class "<<b;
    }
 };
 int main(){
  
    A *ptr;
    B obj;
    ptr=&obj;

    ptr->a=12;

    ptr->Display();

 return 0;
 } 