#include <iostream>
#include <string.h>
using namespace std;
char touppercase(char ch)
{
    if (ch>='A' && ch<='Z')
    {
        return ch;
    }
    else
    {
        char temp = ch -'a' + 'A';
        return temp;
    }
    
}

int main()
{
    char str[100];
    cout << "Enter String : "<<endl;
    cout<<"CHARACTER is : "<<touppercase('a');


    return 0;
}