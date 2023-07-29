#include <iostream>
using namespace std;
class AssOpr{
        int a;
    public:
    void SetData(){
        cout<<"Enter Number : "<<endl;
        cin>>a;
    }
    void ShowData(){
        cout<<"Output : "<<a;
    }
    void operator= (AssOpr O2){
        a=O2.a;
    }
};
int main(){
    AssOpr o1,o2;
    o1.SetData();
    o2=o1;
    o2.ShowData();
return 0;
}