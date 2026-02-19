#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    bool judgeSquareSum(int c)
    {
        // vector<long> ans;
        // long long sum = 0;
        // if (c > 0 && (c & (c - 1)) == 0)
        // {
        //     return true;
        // }
        // for (int i = 0; i * i <= c; i++)
        // {
        //     ans.push_back(i * i);
        // }
        // for (int i = 0; i < ans.size(); i++)
        // {
        //     int needed = c - ans[i];
        //     if (find(ans.begin(), ans.end(), needed) != ans.end())
        //     {
        //         return true;
        //     }
        // }
        // return false;
        long long left = 0;
        long long right = sqrt(c);
        while (left <= right)
        {
            int t = left * left + right * right;
            if (t == c)
                return true;
            if (t < c)
                left++;
            if (t > c)
                right--;
        }
        return false;
    }
};
int main()
{
    return 0;
}