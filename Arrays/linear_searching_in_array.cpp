#include <iostream>
using namespace std;
int linearSearch(int array[],int n,int search){
    for (int i = 0; i < n; i++)
    {
        if (array[i]==search)
        {
            return i;
        }
        
    }
    return -1;
}
int main()
{
    int n;
    
    cout << "Enter the Size of the Array" << endl;
    cin >> n;
    int array[n];
    for (int i = 0; i < n; i++)
    {   
        cout<<"Enter Elements of the Arrray"<<endl;
        cin >> array[i];
    }
    cout<<"Enter the Element You want to search in the Array"<<endl;
    int search;
    cin>>search;
    cout<<"Your Searched element is present at INDEX "<<linearSearch(array, n, search)<<endl;

    return 0;
}