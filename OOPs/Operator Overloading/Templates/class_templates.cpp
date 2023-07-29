#include <iostream>
using namespace std;
template <typename T>
class weight{
    private:
    T kg;
    public:
    void setData(T x){
        kg=x;
        }
    void getData(){
        cout<<kg<<endl;
        }
};
int main(){

    weight <int>obj1;
    weight <float>obj1;
    weight <double>obj1;

    obj1.setData(5);
    obj1.getData();

return 0;
}