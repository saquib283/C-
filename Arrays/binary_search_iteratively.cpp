//Iterative Method

#include <iostream>
using namespace std;

int BinarySearch(int arr[],int n,int keySearch){
    int start = 0;
    int end=n-1;
    while (start<=end)
    {
        int mid = (start+end)/2;

        if (arr[mid]==keySearch)
        {
           return mid;
        }
        else if (keySearch>arr[mid])
        {
            start=mid+1;
        }
        else
        {
            end=mid-1;
        }
        
        
        
    }
    return -1;
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

cout<<"Element is Present at INDEX "<<BinarySearch(arr,n,keySearch);


return 0;
}