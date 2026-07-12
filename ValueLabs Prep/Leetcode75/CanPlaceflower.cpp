#include <bits/stdc++.h>
using namespace std;
class solution
{
public:
    bool canplace(vector<int> nums, int n)
    {
        if (n == 0)
            return true;
        for (int i = 0; i < nums.size(); i++)
        {
            if (nums[i] == 1)
                continue;
            if ((i == 0 || nums[i - 1] == 0) && (i == nums.size() - 1 || nums[i + 1] == 0))
            {
                nums[i] = 1;
                n--;
                if (n == 0)
                    return true;
            }
        }
        return false;
    }
};

int main()
{
    solution sol;
    vector<int> a = {1, 0, 0, 0, 1, 0};
    cout << sol.canplace(a, 2);
}