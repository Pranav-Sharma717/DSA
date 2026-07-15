#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int pivotIndex(vector<int> &nums)
    {
        int total = 0;
        for (int n : nums)
        {
            total += n;
        }
        int leftSum = 0;
        for (int i = 0; i < (int)nums.size(); ++i)
        {
            if (leftSum == total - leftSum - nums[i])
            {
                return i;
            }
            leftSum += nums[i];
        }
        return -1;
    }
};
int main()
{
    vector<int> nyms = {1, 7, 3, 6, 5, 6};
    Solution sol;
    cout << sol.pivotIndex(nyms);
}