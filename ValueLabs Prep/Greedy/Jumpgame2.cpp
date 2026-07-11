#include <bits/stdc++.h>
using namespace std;
class solution
{
public:
    int jumpgame2(vector<int> &nums)
    {
        int cnt = 0;
        int last = 0;
        int mx = 0;
        int n = nums.size();
        for (int i = 0; i < n - 2; i++)
        {
            mx = max(mx, i + nums[i]);
            if (i == last)
            {
                cnt += 1;
                last = mx;
            }
        }
        return cnt;
    }
};

int main()
{
    solution sol;
    vector<int> num = {2, 3, 1, 1, 4};
    cout << sol.jumpgame2(num);
}