#include <iostream>
using namespace std;

bool checkPalindrome(string &str, int start, int end)
{
    if (start > end)
    {
        return true;
    }

    if (str[start] != str[end])
    {
        return false;
    }
    else
    {
        return checkPalindrome(str, start + 1, end - 1);
    }
}

int main()
{
    string str = "labbabababbal";

    bool isPalindrome = checkPalindrome(str, 0, str.length() - 1);

    if (isPalindrome)
    {
        cout << "It is palindrome" << endl;
    }
    else
    {
        cout << "It is not palindrome" << endl;
    }
}