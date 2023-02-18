#include <iostream>
using namespace std;

#define arrSize 15

void bubbleSort(int arr[], int size)
{
    // base case
    if ((size == 0) || (size == 1))
    {
        return;
    }

    // processing
    for (int i = 0; i < size - 1; i++)
    {
        if (arr[i] > arr[i + 1])
        {
            swap(arr[i], arr[i + 1]);
        }
    }

    // recursive apporach
    bubbleSort(arr, size - 1);
}

int main()
{
    int arr[arrSize] = {2, 5, 1, 9, -35, 85, 68, 74, 25, 8, 58, 147, 856, 987, 1002};

    int size = arrSize;

    bubbleSort(arr, size);

    cout << "Sorted array is -> ";

    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
}