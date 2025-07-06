#include <iostream>
using namespace std;

struct rectangle
{
    int length;
    int breadth;
    char x;
};

int main()
{
    struct rectangle rl = {10, 5};
    cout << sizeof(rl) << endl;
    cout << rl.length << endl;
    cout << rl.breadth << endl;
    return 0;
}
