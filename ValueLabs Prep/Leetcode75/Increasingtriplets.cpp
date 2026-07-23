#include <bits/stdc++.h>
using namespace std;

class solution
{
public:
    bool increasetriplesubseq(vector<int> nums)
    {
        int n = INT_MAX;
        int second = INT_MAX;
        for (int num : nums)
        {
            if (num <= n)
            {
                n = num;
            }
            else if (num <= second)
            {
                second = num;
            }
            else
            {
                return true;
            }
        }
        return false;
    }
};
int main()
{
    vector<int> n = {1, 2, 3, 4, 5};
    solution sol;
    cout << sol.increasetriplesubseq(n);
}