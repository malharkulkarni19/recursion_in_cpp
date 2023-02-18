#include <iostream>
using namespace std;

void reachHome(int start, int end)
{
    cout << "Start -> " << start << " "
         << "End -> " << end << endl;

    // base case
    if (start == end)
    {
        cout << "Finally reached.." << endl;
        return;
    }

    // processing
    start++;

    // recursive call
    reachHome(start, end);
}

int main()
{
    int start = 1;
    int end = 10;

    cout << endl;

    reachHome(start, end);

    cout << endl;
}