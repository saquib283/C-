#include <iostream>
using namespace std;
class overload{

   int a;
   public:

   void getData(){
      cout<<"Enter The Value "<<endl;
      cin>>a;

   }

   void Display(){
      cout<<"The Value is : "<<a;

   }
   overload operator+(overload y){

      overload z;

      z.a=a+y.a;
      return z;


   }




};
int main(){

   overload x,y,z;
   x.getData();
   y.getData();
   z=x+y;
   z.Display();


return 0;
}