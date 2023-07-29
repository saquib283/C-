#include <iostream>
using namespace std;
class OpOver{
    private:
    int a;
    public:
    void setData(){
        cout<<"Enter Number : ";
        cin>>a;
    }
    void printData(){
        cout<<"The Number is : "<<a<<endl;
    }
    OpOver operator+ (OpOver O2){
        OpOver O3;
        O3.a= a + O2.a;
        return O3;
        
    }
};

int main(){
    OpOver O1,O2,O3;
    O1.setData();
    O2.setData();
    O3=O1+O2;
    O1.printData();
    O2.printData();
    O3.printData();
return 0;
}