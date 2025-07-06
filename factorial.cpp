// Factoria; using recursion
#include <iostream>
using namespace std;
int factorial(int n)
{
    if (n == 0)
    {
        return 1;
    }
    else
    {
        return n * factorial(n - 1);
    }
}
int main()
{
    int n;
    cout << "Enter a number: " << endl;
    cin >> n;
    cout << "The Factoral of number is:";
    cout << factorial(n);
}