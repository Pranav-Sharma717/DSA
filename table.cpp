#include <iostream>
using namespace std;
class Solution
{
public:
    void printTable(int n)
    {
        int multiplier = 10;
        while (multiplier)
        {
            // Your code here
            cout << n * multiplier;
            multiplier--;
        }

        cout << endl;
    }
};