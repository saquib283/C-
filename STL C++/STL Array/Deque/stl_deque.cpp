//In Deque Insertion and Deletion can be done at both end
#include <iostream>
#include<deque>
using namespace std;
int main(){
deque<int> d;
d.push_back(1);
d.push_front(4);
d.push_front(3);
d.push_front(2);
d.push_front(5);
d.push_front(6);
d.pop_back();
d.pop_front();



for(int i:d){
    cout<< i <<" ";;
}
cout<<endl;
return 0;
}