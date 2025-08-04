#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int **a = new int *[n];
    for (int i = 0; i < n; i++)
    {
        a[i] = new int[3];
        for (int j = 0; j < 3; j++)
        {
            cin >> a[i][j];
        }
    }
    int cnt = 0;
    for (int i = 0; i < n; i++)
    {
        int sum = 0;
        for (int j = 0; j < 3; j++)
        {
            sum += a[i][j];
        }
        if (sum >= 2)
            cnt++;
    }
    cout << cnt << endl;
    ;

    // Free allocated memory
    for (int i = 0; i < n; i++)
        delete[] a[i];
    delete[] a;

    return 0;
}