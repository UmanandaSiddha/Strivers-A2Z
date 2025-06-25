#include <bits/stdc++.h>
using namespace std;

bool checkPalindromeUsingLoop(string s)
{
    int i = 0;
    while (i <= s.length() / 2)
    {
        if (tolower(s[i]) != tolower(s[s.length() - i - 1]))
            return false;
        i++;
    }
    return true;
}

bool checkPalindromeUsingRecursion(string s, int i = 0)
{
    if (i >= s.length() / 2)
        return true;
    if (tolower(s[i]) != tolower(s[s.length() - i - 1]))
        return false;
    return checkPalindromeUsingRecursion(s, i + 1);
}

// Striver - Better Code
bool isPalindrome(string s)
{
    int left = 0, right = s.length() - 1;
    while (left < right)
    {
        if (!isalnum(s[left]))
            left++;
        else if (!isalnum(s[right]))
            right--;
        else if (tolower(s[left]) != tolower(s[right]))
            return false;
        else
        {
            left++;
            right--;
        }
    }
    return true;
}

int main()
{
    string s = "Helleh";

    bool result1 = checkPalindromeUsingLoop(s);
    cout << "Using Loop: " << result1 << endl;

    bool result2 = checkPalindromeUsingRecursion(s);
    cout << "Using Recursion: " << result2 << endl;

    return 0;
}