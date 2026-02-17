#include <bits/stdc++.h>
#include <iostream>
using namespace std;
class Solution
{
public:
    bool checkPerfectNumber(int num)
    {
        if (num <= 1)
            return false;

        int sum = 1; // 1 is always a divisor
        for (int i = 2; i * i <= num; i++)
        {
            if (num % i == 0)
            {
                sum += i;
                if (i * i != num)
                {
                    sum += num / i;
                }
            }
        }
        return sum == num;
    }
};
int main()
{
    Solution sol;
    cout << sol.checkPerfectNumber(28) << endl;
    return 0;
}
