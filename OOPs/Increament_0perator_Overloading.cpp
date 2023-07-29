#include <iostream>
using namespace std;
class IncrementOp{
    int x;
    public:
    void setData(){
        cout<<"Enter Number : "<<endl;
        cin>>x;
    }
    void showData(){
        cout<<"Output is : "<<x;
    }
    void operator++ (){
        x+=1;
    }
};
int main(){
IncrementOp O;
O.setData();
++O;
O.showData();

return 0;
}