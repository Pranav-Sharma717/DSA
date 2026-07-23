#include <bits/stdc++.h>
using namespace std;
int main()
{
    set<int> m;
    int n;
    cin >> n;
    while (n > 0)
    {
        int temp = n % 10;
        m.insert(temp);
        n /= 10;
    }
    for (int i : m)
    {
        cout << i << " ";
    }
    return 0;
}