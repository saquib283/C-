#include <iostream>
using namespace std;
int main()
{
    int marks[] = {5, 10, 15, 20,25};
    int *mark = marks;
    cout <<"The Value of *p is "<< *mark << endl;
    cout <<"The Value of *p+1 is "<< *(mark + 1) << endl;
    cout <<"The Value of *p+2 is "<< *(mark + 2) << endl;
    cout <<"The Value of *p+3 is "<< *(mark + 3) << endl;
    cout <<"The Value of *p+4 is "<< *(mark + 4) << endl;

    

    return 0;
}