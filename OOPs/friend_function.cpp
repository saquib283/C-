#include <iostream>
#include<fstream>
using namespace std;
int main(){

    string st="I am Rehan";
    ofstream out("text.txt");
    out<<st;

return 0;
}