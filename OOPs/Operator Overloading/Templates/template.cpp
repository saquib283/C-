#include <iostream>
using namespace std;
template <typename T>

T add(T a , T b){
    return a+b;
}
int main(){

    cout<<add<int>(3,5)<<endl;
    cout<<add<float>(1.5,1.9)<<endl;
    cout<<add<long>(122,155)<<endl;
    cout<<add<double>(13444,12344)<<endl;

return 0;
}