//prime number -- a which is divisible by itself or 1

#include<iostream>
using namespace std;
int main() {
int n;
cout<<"Enter the Number"<<endl;
cin>>n;
for(int i=2;i<n;i++){
     if(n%i==0){
          cout<<"Non-Prime"<<endl;
          break;
     }
     else{
         cout<<"Prime-Number"<<endl;
         break;
     }
}
return 0 ;
}

