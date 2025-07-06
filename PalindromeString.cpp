#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    bool Palindromecheck(string s, int i = 0)
    {
        int n = s.length();
        int l = 0;
        int r = n - 1;
        while (l < r)
        {
            while (l < r && !isalnum(s[l]))
                l++;
            while (l < r && !isalnum(s[r]))
                r--;
            if (tolower(s[l]) != tolower(s[r]))
                return false;

            l++;
            r++;
        }
        return true;
    }
    int main()
    {
        string s;
        cout << "enter a string" << endl;
        cin >> s;
        if (Palindromecheck(s))
        {
            cout << "it is a palindrome" << endl;
        }
        else
        {
            cout << "not a palindrome" << endl;
        }
    }
};