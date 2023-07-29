#include <iostream> 
#include <string> 
#include <algorithm> 
 
using namespace std; 
 
int main() 
{ 
        string s; 
        cout<<"Enter String"<<endl;
        getline(cin, s); 
        reverse(s.begin(), s.end()); 
        cout<<s; 
        return 0; 
} 