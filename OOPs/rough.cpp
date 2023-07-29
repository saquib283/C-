#include <iostream>
#include<fstream>
using namespace std;
int main(){
ifstream rin;
string storage;
rin.open("textfile.txt");
while (rin.eof()==0)
{
    getline(rin,storage);
}


cout<<storage;

return 0;
}