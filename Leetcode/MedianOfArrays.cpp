#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    double findMedianSortedArrays(vector<int> &nums1, vector<int> &nums2)
    {
        vector<int> AB;
        AB.reserve(nums1.size() + nums2.size());
        AB.insert(AB.end(), nums1.begin(), nums1.end());
        AB.insert(AB.end(), nums2.begin(), nums2.end());
        sort(AB.begin(), AB.end());
        long long left = 0;
        long long right = AB.size() - 1;
        double median;
        double mid = left + right / 2;
        if (AB.size() % 2 != 0)
        {
            median = AB[mid];
            return median;
        }
        else
        {
            double median2 = (AB[mid] + AB[mid + 1]) / 2.0;
            return median2;
        }
    }
};

int main()
{
    Solution sol;
    vector<int> nums1 = {1, 2};
    vector<int> nums2 = {3, 4};
    double result = sol.findMedianSortedArrays(nums1, nums2);
    cout << result;
}