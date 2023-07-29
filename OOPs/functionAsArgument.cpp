#include <iostream>
using namespace std;
class Time{
    int hour , minute;
    public:
    void input(){
        cout<<"Enter Hour : ";
        cin>>hour;
        cout<<"Enter Minute : ";
        cin>>minute;
    
    }
    void display(){
        cout<<"Hour is : "<<hour<<endl;
        cout<<"Minute is : "<<minute<<endl;
    }

    void sum(Time t1 , Time t2){
        hour=t1.hour+t2.hour;
        minute=t1.minute+t2.minute;
    }

};
int main(){
Time t1,t2,t3;
t1.input();
t2.input();
t3.sum(t1,t2);
t3.display();
return 0;
}