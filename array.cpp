#include <iostream>
using namespace std;
// int main()
// {
//     int A[5] = {2, 4, 6, 8, 10};
//     int *p;
//     int i;
//     p = new int[5];
//     p[0] = 3;
//     p[1] = 5;
//     p[2] = 7;
//     p[3] = 9;
//     p[4] = 11;
//     for (i = 0; i < 5; i++)
//     {
//         cout << A[i] << " ";
//     }
//     cout << endl;
//     for (i = 0; i < 5; i++)
//     {
//         cout << p[i] << " ";
//     }
// }

// increasing size of an array
int main()
{
    int *p, *q;
    p = new int[5];
    q = new int[10];
    p[0] = 10;
    p[1] = 20;
    p[2] = 30;
    p[3] = 40;
    p[4] = 50;
    for (int i = 0; i < 5; i++)
    {
        q[i] = p[i];
    }
    free(p);
    p = q;
    q = NULL;
    p[5] = 60;
    for (int i = 0; i < 6; i++)
    {
        cout << p[i] << " ";
    }
}