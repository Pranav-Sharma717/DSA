#include <bits/stdc++.h>
using namespace std;

class solution
{
public:
    int gcd(int n, int m)
    {
        int A = n;
        int B = m;
        while (B != 0)
        {
            int temp = B;
            B = A % B;
            A = temp;
        }
        return A;
    }
    string GCDofstring(string w1, string w2)
    {
        if (w1 + w2 != w2 + w1)
            return "";
        int len = gcd(w1.length(), w2.length());
        return w1.substr(0, len);
    }
};

int main()
{
    string w1 = "ABABAB";
    string w2 = "ABAB";
    solution sol;
    cout << sol.GCDofstring(w1, w2);
}