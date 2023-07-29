#include<iostream>
#include<climits>

using namespace std;
int main() {
int n;
cout<<"Enter Size Of Array"<<endl;
cin>>n;
int arr[n];
for (int i = 0; i < n; i++)
{    
     cout<<"Enter element of Array"<<endl;
     cin>>arr[i];
}

int maxNo=INT_MIN;
int minNo=INT_MAX;
for(int i=0;i<n;i++){
     maxNo=max(maxNo,arr[i]);
     minNo=min(minNo,arr[i]);
}
cout<<"The Maximum element of the Array is "<<maxNo<<endl;
cout<<"The Minimum element of the Array is "<<minNo<<endl;

return 0 ;
}