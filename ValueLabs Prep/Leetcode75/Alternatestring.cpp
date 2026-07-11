#include <bits/stdc++.h>
using namespace std;

class solution
{
public:
    string altstring(string word1, string word2)
    {
        int n = word1.length();
        int m = word2.length();
        int j = 0;
        string ans = "";
        if (n == m)
        {
            for (int i = 0; i < word1.length(); i++)
            {
                ans += word1[i];
                ans += word2[j];
                j++;
            }
        }
        else if (n > m)
        {
            for (int i = 0; i < word1.length(); i++)
            {
                ans += word1[i];
                if (j < word2.length())
                {
                    ans += word2[j];
                    j++;
                }
            }
        }
        else
        {
            for (int i = 0; i < word2.length(); i++)
            {
                ans += word2[i];
                if (j < word1.length())
                {
                    ans += word1[j];
                    j++;
                }
            }
        }
        return ans;
    }
};

int main()
{
    solution sol;
    string word1 = "abc";
    string word2 = "pq";
    cout << sol.altstring(word1, word2);
}