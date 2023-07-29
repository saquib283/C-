#include <iostream>
using namespace std;
class One{

    public:
    void display(){
        cout<<"Inside Class One Display"<<endl;

    }

};
class Two:public One{
    public:
    void display(){
        cout<<"Inside Class Two Display"<<endl;
        // One::display();
    }   
};
int main(){
    Two o1;
    o1.One::display();

return 0;
}