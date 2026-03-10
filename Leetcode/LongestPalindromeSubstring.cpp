#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    string expandAroundCenter(string s, int left, int right)
    {
        while (left >= 0 && right < s.length() && s[left] == s[right])
        {
            left--;
            right++;
        }
        return s.substr(left + 1, right - left - 1);
    }

    string longestPalindrome(string s)
    {
        if (s.empty())
            return "";

        string longest = "";
        for (int i = 0; i < s.length(); i++)
        {
            string odd = expandAroundCenter(s, i, i);
            string even = expandAroundCenter(s, i, i + 1);

            string current = (odd.length() > even.length()) ? odd : even;
            if (current.length() > longest.length())
            {
                longest = current;
            }
        }
        return longest;
    }
};

// class Solution
// {
// public:
//     vector<int> findMissingElements(vector<int> &nums)
//     {
//         vector<int> sol = {};
//         sort(nums.begin(), nums.end());
//         int n = nums.size();

//         for (int i = 0; i < n - 1; i++)
//         {
//             for (int j = nums[i] + 1; j < nums[i + 1]; j++)
//             {
//                 sol.push_back(j);
//             }
//         }
//         return sol;
//     }
// };

int main()
{
    string a = "babad";
    Solution sol;
    string res = sol.longestPalindrome(a);
    cout << res << endl;
    cout << 2 % 10;
}