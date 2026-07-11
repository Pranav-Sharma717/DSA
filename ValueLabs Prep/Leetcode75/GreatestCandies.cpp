#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    vector<bool> kidsWithCandies(vector<int> &candies, int extraCandies)
    {
        int mx = *max_element(candies.begin(), candies.end());
        int n = candies.size();
        vector<bool> ans(n, false);
        for (int i = 0; i < n; i++)
        {
            if (candies[i] + extraCandies >= mx)
                ans[i] = true;
        }
        return ans;
    }
};

int main()
{
    Solution sol;
    vector<int> a = {2, 3, 1, 5};
    vector<bool> an = sol.kidsWithCandies(a, 3);
    for (int i = 0; i < an.size(); i++)
    {
        cout << an[i] << " ";
    }
}