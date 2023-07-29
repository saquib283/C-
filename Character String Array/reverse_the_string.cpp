#include <iostream>
#include <string.h>
using namespace std;
void reverse(char str[],int length){
    int start = 0;
    int end=length-1;

    while(start<end){
        swap(str[start++],str[end--]);
    }
}

int main()
{
    char str[20];
    cout << "Enter String : ";
    cin >> str;
    int length =strlen(str);
    reverse(str,length);
    cout<<"Reverse is : ";
    cout<<str;
  
    return 0;
}