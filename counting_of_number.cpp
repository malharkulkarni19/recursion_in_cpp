#include <iostream>
using namespace std;

int print(int n)
{
    // base case, if we cant use base case, stack overflow happen
    if (n == 0)
    {
        return 1;
    }

    cout << n << " ";

    // recurrisive relation
    print(n - 1);
}

int main()
{
    int n;
    cin >> n;

    print(n);
}
