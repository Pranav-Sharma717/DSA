#include <iostream>
using namespace std;
int power(int m, int n)
{
    if (n == 0)
    {
        return 1;
    }
    return power(m, n - 1) * m;
}
int main()
{
    int r = power(2, 9);
    cout << r;
}