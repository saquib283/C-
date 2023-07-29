// USING BUBBLE SORT

#include <iostream>
using namespace std;

int BinarySearch(int arr[], int n, int key)
{
    int firstIndex = 0;
    int lastIndex = n - 1;

    while (firstIndex <= lastIndex)
    {
        int midIndex = (firstIndex + lastIndex) / 2;

        if (arr[midIndex] == key)
        {
            return midIndex;
        }
        else if (arr[midIndex] < key)
        {
            firstIndex = midIndex + 1;
        }
        else

            lastIndex = midIndex - 1;
    }
    return -1;
}

int main()
{
    int n;
    cout << "No. Of Element You Want" << endl;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cout << "Enter " << i << " Element" << endl;
        cin >> arr[i];
    }

    int counter = 1;
    while (counter < n)
    {
        for (int i = 0; i < n - counter; i++)
        {
            if (arr[i] > arr[i + 1])
            {
                int temp = arr[i];
                arr[i] = arr[i + 1];
                arr[i + 1] = temp;+
            }
        }
        counter++;
    }
    // for (int i = 0; i < n; i++)
    // {
    //     cout<<arr[i]<<" ";
    // }

    cout << "  Which Element You Want to Search" << endl;
    int key;
    cin >> key;

    cout << "Your Element Is Present at Index " << BinarySearch(arr, n, key);

    return 0;
}