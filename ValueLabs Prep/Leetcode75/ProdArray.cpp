#include <bits/stdc++.h>
using namespace std;

// solution class contains method to compute product of array except self
class solution
{
public:
    // prodarr: for each index i, returns product of all nums[j] where j != i
    // Example: nums = {1,2,3,4} -> result = {24,12,8,6}
    vector<int> prodarr(vector<int> nums)
    {
        int n = nums.size();   // n = number of elements
        vector<int> ans(n, 1); // initialize answer array with 1s

        int prefix = 1; // prefix holds product of elements before i
        for (int i = 0; i < n; i++)
        {
            ans[i] = prefix;   // set ans[i] to product of all elements left of i
            prefix *= nums[i]; // update prefix to include nums[i]
            // Example iteration (nums={1,2,3,4}):
            // i=0: ans[0]=1, prefix=1*1=1
            // i=1: ans[1]=1, prefix=1*2=2
            // i=2: ans[2]=2, prefix=2*3=6
            // i=3: ans[3]=6, prefix=6*4=24
        }

        int suffix = 1; // suffix holds product of elements after i
        for (int i = n - 1; i >= 0; i--)
        {
            ans[i] *= suffix;  // multiply by product of elements right of i
            suffix *= nums[i]; // update suffix to include nums[i]
            // Continuing example:
            // start suffix=1
            // i=3: ans[3]=6*1=6, suffix=1*4=4
            // i=2: ans[2]=2*4=8, suffix=4*3=12
            // i=1: ans[1]=1*12=12, suffix=12*2=24
            // i=0: ans[0]=1*24=24, suffix=24*1=24
        }
        return ans; // final ans contains products except self
    }
};

int main()
{
    vector<int> nums = {1, 2, 3, 4};
    solution sol;
    vector<int> result = sol.prodarr(nums);
    for (int x : result)
    {
        cout << x << " "; // prints: 24 12 8 6
    }
}