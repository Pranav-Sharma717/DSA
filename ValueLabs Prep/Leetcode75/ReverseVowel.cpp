#include <bits/stdc++.h>
using namespace std;
class solution
{
public:
    string revow(string s)
    {
        vector<int> ans;
        for (char c : s)
        {
            if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' || c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U')
            {
                ans.emplace_back(c);
            }
        }
        reverse(ans.begin(), ans.end());
        int v = 0;
        for (int i = 0; i < s.length(); i++)
        {
            char c = s[i];
            if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' || c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U')
            {
                s[i] = ans[v];
                v++;
            }
        }
        return s;
    }
};

int main()
{
    solution s;
    cout << s.revow("IceCrEAM");
}