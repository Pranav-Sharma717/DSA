#include <iostream>
using namespace std;
void TOH(int n, int a, int b, int c)
{
    if (n > 0)
    {
        TOH(n - 1, a, c, b);
        cout << "Move disk " << n << " from rod " << a << " to rod " << c << endl;
        TOH(n - 1, b, a, c);
    }
}
int main()
{
    TOH(2, 3, 1, 2);
}