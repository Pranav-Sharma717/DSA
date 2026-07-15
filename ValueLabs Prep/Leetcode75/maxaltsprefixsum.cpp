#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int largestAltitude(vector<int> &gain)
    {
        vector<int> alts(gain.size() + 1, 0);
        for (int i = 1; i <= gain.size(); i++)
        {
            alts[i] = alts[i - 1] + gain[i - 1];
        }
        int ans = *max_element(alts.begin(), alts.end());
        return ans;
    }
};
int main()
{
    Solution sol;
    vector<int> nums = {-5, 1, 5, 0, -7};
    cout << sol.largestAltitude(nums);
}