#include <iostream>
using namespace std;
void recursion(int source , int destination){
    cout<<"Source is "<<source<<" "<<"Destination is "<<destination<<endl;
    if (source== destination)
    {
        cout<<"You Reached The Destination";
        return;
    }
    source++;
    recursion(source,destination);
}
int main(){
int source=1;
int destination=10;
recursion(source,destination);
return 0;
}