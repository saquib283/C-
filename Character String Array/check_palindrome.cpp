#include <iostream>
#include <string.h>
using namespace std;
int main()
{
    char str[50];
    cout << "Enter String :";
    cin >> str;
    int flag = 0;
    int length = strlen(str);

    for (int i = 0; i < length - i - 1; i++)
    {
        if (str[i] != str[length - i - 1])
        {
            flag++;
            break;
        }
    }
    if (flag == 1)
    {
        cout << "String is Not Palindrome";
    }
    else
    {
        cout << "String is Palindrome";
    }

    return 0;
}