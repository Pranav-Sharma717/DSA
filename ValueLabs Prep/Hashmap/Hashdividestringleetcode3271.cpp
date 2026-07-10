#include <bits/stdc++.h>
using namespace std;

class solution
{
public:
    string HashDivide(string s, int k)
    {
        string ans = "";
        for (int i = 0; i < s.size(); i += k)
        {
            int sum = 0;
            for (int j = i; j < i + k; j++)
            {
                sum += s[j] - 'a';
            }
            ans += char('a' + (sum % 26));
        }
        return ans;
    }
};

int main()
{
    string st = "abcd";
    solution sol;
    cout << sol.HashDivide(st, 2) << endl;
}