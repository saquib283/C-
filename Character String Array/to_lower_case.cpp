#include <iostream>
#include <string.h>
using namespace std;
char tolowercase(char ch)
{
    if (ch>='a' && ch<='z')
    {
        return ch;
    }
    else
    {
        char temp = ch -'A' + 'a';
        return temp;
    }
    
}

int main()
{
    char str;
    cout << "Enter String : "<<endl;
    cout<<"CHARACTER is : "<<tolowercase('A');


    return 0;
}