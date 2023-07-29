// Selection sort

//<---->find the minimum element in the unsorted array and swap it
//<---->with element at begining

#include <iostream>
using namespace std;
int main()
{

    // Taking input in the array
    int n;
    cout << "Enter no of Elements" << endl;
    cin >> n;
    int array[n];
    for (int i = 0; i < n; i++)
    {
        cout << "Enter Elements" << endl;
        cin >> array[i];
    }
    // Ends Here

    // Shorting Array
    for (int i = 0; i<n-1; i++)
    {
        for (int j = i+1; j<n; j++)
        {
            if (array[j] < array[i])
            {
                int temp = array[j];
                array[j] = array[i];
                array[i] = temp;
            }
        }
    }
    // Ends Here

    // Printing the Array After Shorting
    for (int i = 0; i < n; i++)
    {
        cout << array[i] <<" ";
    }

    return 0;
}