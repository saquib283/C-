#include <iostream>
using namespace std;
void swap(int arr[], int j, int k)
{
    int temp = arr[j];
    arr[j] = arr[k];
    arr[k] = temp;
}
int main()
{
    int n;
    cout << "Enter The No. of Element" << endl;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cout << "Enter Element" << endl;
        cin >> arr[i];
    }

    for (int i = 0; i < n - 1; i++)
    {
        bool swapped = false;

        for (int j = 0; j < n - 1 - i; j++)
        {

            if (arr[j + 1] < arr[j])
            {
                swapped = true;
                swap(arr, j, j + 1);
            }
        }
        if (!swapped)
        {
            break;
        }
    }

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}

// #include <iostream>
// using namespace std;
// int main()
// {
//     int arr[10] = {5, 9, 2, 8, 3, 1, 4, 7, 6, 0};
//     for (int i = 0; i <= 9; i++)
//     {
//         for (int j = 0; j <= 9 - i; j++)
//         {
//             if (arr[j + 1] < arr[j])
//             {
//                 int temp = arr[j];
//                 arr[j] = arr[j + 1];
//                 arr[j + 1] = temp;
//             }
//         }
//     }

//     for (int i = 0; i <= 9; i++)
//     {
//         cout<<" "<<arr[i];
//     }

//     return 0;
// }