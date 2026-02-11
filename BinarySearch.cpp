#include <bits/stdc++.h>
using namespace std;
//commit
class solution
{
public:
    int binarysearch(vector<int> &nums, int target)
    {
        int n = nums.size();
        int l = 0;
        int r = n - 1;
        while (l <= r)
        {
            int m = l + (r - l) / 2;
            if (target == nums[m])
                return m;
            else if (nums[m] < target)
                l = m + 1;
            else
                r = m - 1;
        }
        return -1;
    }
};

int main()
{
    vector<int> nums = {1, 2, 3};
    solution sol;
    cout << sol.binarysearch(nums, 2);
}