#include <iostream>
using namespace std;
int linearSearch(int arr[2][3],int key ){
    
    for (int i = 0; i < 2; i++)
    {   
        for (int j = 0; j < 3; j++)
        {
            if (arr[i][j]==key)
            {
                return 1;
            }
            
        }
        
    }
    
}
int main()
{

    int arr[2][3]={{123},{456}}; 
    //OR  You can write like this --> int {1,2,3,4,5,6};
   
    int row=2;
    int col=3;
    int key;
    cout<<"Enter Key : ";
    cin>>key;
    int ispresent = 0;
    linearSearch(arr,key);
    if (ispresent)
    {
        cout<<"Element Found ";
    }
    else
    {
        cout<<"Element Not Found ";
    }
    
    



    
 
    

    return 0;
}