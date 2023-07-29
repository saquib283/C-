#include <iostream>
using namespace std;

int sum(int a, int b) //Functtion Prototype ____<Arguments/formal parameters>
{                   
    int c = a + b; // Function Definition
    return c;
}
int main()
{
    int a, b;
    cout << "Enter First Number " << endl;
    cin >> a;
    cout << "Enter Second Number " << endl;
    cin >> b;

    cout<<"The Sum is "<<sum(a, b); //Function Call ___<Actual Parameters>

    return 0;
}
