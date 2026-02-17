#include <bits/stdc++.h>
using namespace std;

int findNthDigit(int n)
{
    long long digits = 1;
    long long count = 9;
    long long start = 1;
    while (n > digits * count)
    {
        n -= digits * count;
        digits++;
        count *= 10;
        start *= 10;
    }
    long long num = start + (n - 1) / digits;

    int digitIndex = (n - 1) % digits;

    return to_string(num)[digitIndex] - '0';
}

int main()
{
    int n;
    cin >> n;
    cout << findNthDigit(n) << endl;
    return 0;
}