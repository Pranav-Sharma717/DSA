#include <iostream>
using namespace std;
int main()
{
    return 0;
}

// 2 D Array question : (Team 231A)
// Question is to find the count of all problems that cna be solved. Approach is to use 2 D arrays.
// int main()
// {
//     int n;
//     cin >> n;
//     int **a = new int *[n];
//     for (int i = 0; i < n; i++)
//     {
//         a[i] = new int[3];
//         for (int j = 0; j < 3; j++)
//         {
//             cin >> a[i][j];
//         }
//     }
//     int cnt = 0;
//     for (int i = 0; i < n; i++)
//     {
//         int sum = 0;
//         for (int j = 0; j < 3; j++)
//         {
//             sum += a[i][j];
//         }
//         if (sum >= 2)
//             cnt++;
//     }
//     cout << cnt << endl;
//     ;

//     // Free allocated memory
//     for (int i = 0; i < n; i++)
//         delete[] a[i];
//     delete[] a;

//     return 0;
// }
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// Way too long words 71A
// int main()
// {
//     string a;
//     cin >> a;
//     if (a.length() <= 10)
//         cout << a;
//     int cnt = 0;
//     int n = a.length();
//     for (int i = 1; i <= n - 2; i++)
//     {
//         cnt++;
//     }
//     if (cnt > 10)
//     {
//         cout << a[0] << cnt << a[n];
//     }
// }
int main()
{
    int n;
    cin >> n;
    for (int i = 0; i <= n; i++)
    {
        string a;
        cin >> a;
        int n = a.length();
        if (n <= 10)
            cout << a << endl;
        else
            cout << a[0] << n - 2 << a[n - 1] << endl;
    }
    return 0;
}