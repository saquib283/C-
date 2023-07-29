#include <iostream>
#include <array>
using namespace std;
int main()
{

    int oldArray[5] = {1, 2, 3, 4, 5};

    array<int, 5> a = {1, 2, 3, 4, 5}; // New Implementation  where we write array first then inside < DataType  of array , size of array> name of array = declaration of array

    cout<<a.size()<<endl;  // size of array
    cout<<a.at(2)<<endl; //position of array
    cout<<a.empty()<<endl; //is array empty or not Return boolean value
    cout<<a.front()<<endl; //firstelement of array
    cout<<a.back()<<endl; // last element of array
    



    return 0;
}