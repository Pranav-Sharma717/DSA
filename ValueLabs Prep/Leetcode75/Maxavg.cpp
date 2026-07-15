#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    double findMaxAverage(vector<int> &nums, int k)
    {
        int sum = 0;

        // First window
        for (int i = 0; i < k; i++)
        {
            sum += nums[i];
        }

        int maxSum = sum;

        // Slide the window
        for (int i = k; i < nums.size(); i++)
        {
            sum += nums[i];
            sum -= nums[i - k];
            maxSum = max(maxSum, sum);
        }

        return (double)maxSum / k;
    }
};

int main()
{
    Solution sol;
    vector<int> nums = {1, 12, -5, -6, 50, 3};
    int k = 4;
    double ans = sol.findMaxAverage(nums, k);
    cout << ans;
}