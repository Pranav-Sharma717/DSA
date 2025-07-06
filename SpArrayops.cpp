// Special operations on an array
// Insertion in a sorted array
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
// int main()
// {
//     int A[10] = {4, 8, 13, 16, 29, 25, 28, 33};
//     int num = 18;
//     int n = 8;
//     int i = n - 1;
//     while (A[i] >= num)
//     {
//         A[i + 1] = A[i]; // Shifting of all the elements greater than num
//         i--;
//     }
//     A[i + 1] = num;
//     n++;
//     for (int j = 0; j < n; j++)
//     {
//         cout << A[j] << " ";
//     }
// }
///////////////////////////////////////////////
// Checking if an array is sorted
// int main()
// {
//     int a[8] = {4, 5, 6, 7, 8, 9, 10, 2};
//     int n = 8;
//     int i = 0;
//     bool check = true;
//     while (i < n - 1)
//     {
//         if (a[i] > a[i + 1])
//             check = false;
//         i++;
//     }
//     cout << check << endl;
// }
///////////////////////////////////////
// Arranging negative elements on the left side.
// int main()
// {
//     int a[10] = {-6, 3, -8, 10, 5, -7, -9, 12, -4, 2};
//     int i = 0;
//     int j = 9;
//     while (i < j)
//     {
//         while (a[i] < 0)
//         {
//             i++;
//         }
//         while (a[j] >= 0)
//         {
//             j--;
//         }
//         if (i < j)
//             swap(a[i], a[j]);
//     }
//     for (int k = 0; k < 10; k++)
//     {
//         cout << a[k] << " ";
//     }
// }
//////////////////////////////////
// Merging arrays
int main()
{
    int b[5] = {1, 2, 3, 4, 5};
    int a[5] = {12, 15, 18, 19, 20};
    int c[10];
    int i = 0;
    int j = 0;
    int k = 0;
    while (i < 6 && j < 6)
    {
        if (a[i] < b[j])
            c[k++] = a[i++];
        else
            c[k++] = b[j++];
    }
    for (int o = 0; o < 10; o++)
    {
        cout << c[o] << " ";
    }
}