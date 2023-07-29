#include <iostream>
using namespace std;
class Complex
{
    int a, b;

public:
    Complex(int, int);
    void display();
};
Complex::Complex(int x, int y)
{
    a = x;
    b = y;
}
void Complex ::display()
{
    cout << "Fist Number = " << a <<""<<endl;
    cout << "Second Number = " << b;
}
int main()
{
    int a = 5;
    int b = 7;
    Complex ob(a, b);

    ob.display();

    return 0;
}