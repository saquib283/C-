#include <iostream>
using namespace std;
template<typename T>

T add(T a , T b){
    return a+b;
}
int main(){

    int a=5;
    float b=7.89;

    cout<<add<int>(a,b)<<endl;
    cout<<add<float>(a,b)<<endl;
    cout<<add<double>(a,b)<<endl;


return 0;
}