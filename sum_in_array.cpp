#include <iostream>
using namespace std;

int getSum(int arr[], int size)
{
    // base case
    if (size == 0)
    {
        return 0;
    }

    if (size == 1)
    {
        return arr[0];
    }

    // processing and recursive call
    int remainingPart = getSum(arr + 1, size - 1);
    int sum = arr[0] + remainingPart;
    return sum;
}

int main()
{
    int arr[5] = {2, 5, 11, 16, 35};
    int size = 5;

    int sum = getSum(arr, size);

    cout << "The sum is -> " << sum << endl;
}