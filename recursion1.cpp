#include <iostream>
using namespace std;
void fun(int n)
{
    static int x = 0;
    if (n > 0)
    {
        x++;
        fun(n - 1);
        cout << n + x << endl;
    }
}
int main()
{
    int a = 5;
    fun(a);
}
