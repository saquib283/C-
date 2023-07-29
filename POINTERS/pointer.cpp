
// arr[i] = *(arr+i)
// i[arr] = *(i+arr)
#include <iostream>
using namespace std;
int main(){
int arr[10]={1,2,3,4,5};
int i=3;

cout<< i[arr];
return 0;
}