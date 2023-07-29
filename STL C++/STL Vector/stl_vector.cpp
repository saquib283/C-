// Vector is the type of Array that create new array doubles its size when Array when array size is needs to be increased and Dumped the old array
#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> vec;
    
    cout << "Capacity -> " << vec.capacity() << endl; //Capacity of  vector
    cout << "Size -> " << vec.size() << endl; //  size of vector

    vec.push_back(1);  // Add element in the vector at first
    vec.push_back(2);  // Add element in the vector
    vec.push_back(3);  // Add element in the vector
    vec.push_back(4);  // Add element in the vector
    vec.push_back(5);  // Add element in the vector
    vec.push_back(6);  // Add element in the vector
    vec.push_back(7);  // Add element in the vector
    vec.push_back(8);  // Add element in the vector
    vec.push_back(9);  // Add element in the vector
    vec.push_back(10); // Add element in the vector
    cout<<"Before PopBack Element is : ";

    for (int i : vec)
    {
        cout << i << "  "; /// Traversing Element inn the Vector
    }
    cout << endl;

    vec.pop_back(); //  Delete element from Vector from end
    vec.pop_back(); //  Delete element from Vector
    vec.pop_back(); //  Delete element from Vector
    vec.pop_back(); //  Delete element from Vector
    vec.pop_back(); //  Delete element from Vector

    cout<<"After PopBack Element is : ";
    for (int i : vec)
    {
        cout << i << "  "; /// Traversing Element inn the Vector
    }
    cout << endl;

    cout << "Capacity -> " << vec.capacity() << endl; //Capacity of  vector
    cout << "Size -> " << vec.size() << endl;  //  size of vector
    cout << "1st Element  -> " << vec.front() << endl; //First  element of Vector
    cout << "Last Element -> " << vec.back() << endl; //last ellement of  vector
    cout<<"Size Before Clearing Vector -> "<<vec.size()<<endl;
    cout<<"Capacity Before Clearing Vector -> "<<vec.capacity()<<endl;

    vec.clear(); //Delete all the Element in the vector but capacity remain same 

    cout<<"Size After Clearing Vector -> "<<vec.size()<<endl;
    cout<<"Capacity After Clearing Vector -> "<<vec.capacity()<<endl;



    return 0;
}