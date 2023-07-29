#include <iostream>
using namespace std;
int main(){
int a, b ,c;
cout<<"Enter the First Number :  ";
cin>>a;
cout<<"Enter the second NUmber : "<<endl;
cin>>b;
try{
    if (b!=0){
        c=a/b;
        cout<<"the Division gives "<<c;
    }
    else{
        throw(b);

    }
}
catch(int b){
    cout<<"Cant't Divide Number with 0";
}


return 0;
}