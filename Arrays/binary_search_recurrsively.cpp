#include <iostream>
using namespace std;

int BinarySearch(int arr[],int n,int keySearch,int start,int end){
if (end>start)
{
    return -1;
}
int mid=(start+end)/2;
if (arr[mid]==keySearch)
{
    return mid;
}
if (keySearch>arr[mid])
{
    return BinarySearch(arr,keySearch,mid+1,end);
}
return BinarySearch(arr,keySearch,start,mid-1);



}


int main(){
cout<<"Enter No. Of Elements"<<endl;
int n;
cin>>n;
int arr[n];

for (int i = 0; i < n; i++)
{
    cout<<"Enter Elements"<<endl;
    cin>>arr[i];
}
cout<<"Element You Want to Search"<<endl;
int keySearch;
cin>>keySearch;
int start=0;
int end=n-1;
cout<<"Element is Present at INDEX "<<BinarySearch(arr,n,keySearch,start,end);
return 0;
}