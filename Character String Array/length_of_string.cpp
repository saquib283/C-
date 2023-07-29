#include <iostream>
using namespace std;
int stringlength(char str[], int count)
{
    for (int i = 0; i < str[i]; i++)
    {
        count++;
    }
    return count;
}
int main()
{
    char str[20];
    cout << "Enter String : ";
    cin >> str;
    int count = 0;

    int length = stringlength(str, count);
    cout << "Length is " << length << endl;
    return 0;
}

// We can also use strlen(); function to count the length of the string
// for Exampple

// #include <iostream>
// #include <string.h>
// using namespace std;

// int main()
// {
//     char str[20];
//     cout << "Enter String : ";
//     cin >> str;
//     int length = strlen(str);
//     cout << "Length is : " << length << endl;
//     return 0;
// }
