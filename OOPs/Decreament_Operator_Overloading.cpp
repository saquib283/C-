#include <iostream>
using namespace std;
class DecreOpr{
    int a;
    public:
    void SetData(){
        cout<<"Enter Number : "<<endl;
        cin>>a;
    }
    void ShowData(){
        cout<<"Output : "<<a;
    }
    void operator--(){
        a-=1;
    }
};
int main(){
DecreOpr o1;
o1.SetData();
--o1;
o1.ShowData();

return 0;
}