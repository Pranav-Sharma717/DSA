#include <bits/stdc++.h>
using namespace std;
// Hashing
// int main()
// {
//     int a[5] = {1, 3, 2, 1, 3};
//     int hash[13] = {0};
//     for (int i = 0; i < 5; i++)
//     {
//         hash[a[i]] += 1;
//     }
//     int q;
//     cout << "enter the number of elements to be searched" << endl;
//     cin >> q;
//     while (q--)
//     {
//         int number;
//         cout << "enter the number to be searched" << endl;
//         cin >> number;
//         cout << "The number of times number occurs is" << hash[number] << endl;
//     }
//     return 0;
// }
////////////////////////////////////////////////////////////////////////
// Hasing characters
// int main()
// {
//     string s = "Geeksforgeeks";
//     int hash[26] = {0};
//     for (int i = 0; i < s.length(); i++)
//     {
//         hash[s[i] - (s[i] >= 'a' ? 'a' : 'A')];
//     }
//     int q;
//     cout << "enter the number of elements to be searched" << endl;
//     cin >> q;
//     while (q--)
//     {
//         char c;
//         cout << "enter the character to be searched" << endl;
//         cin >> c;
//         cout << "The number of times character occurs is" << hash[c - (c >= 'a' ? 'a' : 'A')] << endl;
//     }
//     return 0;
// }
////////////////////////////////////////////////////////////////
// Hashing using map
// int main()
// {
//     int n;
//     cout << "Enter the number of elements" << endl;
//     cin >> n;
//     int a[n];
//     cout << "Enter the elements" << endl;
//     for (int i = 0; i < n; i++)
//     {
//         cin >> a[i];
//     }
//     int q;
//     cout << "Enter the number of elements to be searched" << endl;
//     cin >> q;
//     map<int, int> m;
//     while (q--)
//     {
//         int number;
//         cout << "Enter the number to be searched" << endl;
//         cin >> number;
//         for (int i = 0; i < n; i++)
//         {
//             m[a[i]]++;
//         }
//         cout << "The number of times number occurs is" << m[number] << endl;
//     }
//     cout << "This is how it is stored in the map" << endl;
//     for (auto it : m)
//     {
//         cout << it.first << " " << it.second << endl;
//     }
// }
// Unordered map
int main()
{
    int n;
    cout << "Enter the number of elements" << endl;
    cin >> n;
    int a[n];
    cout << "Enter the elements" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int q;
    cout << "Enter the number of elements to be searched" << endl;
    cin >> q;
    unordered_map<int, int> m;
    while (q--)
    {
        int number;
        cout << "Enter the number to be searched" << endl;
        cin >> number;
        for (int i = 0; i < n; i++)
        {
            m[a[i]]++;
        }
        cout << "The number of times number occurs is" << m[number] << endl;
    }
    cout << "This is how it is stored in the map" << endl;
    for (auto it : m)
    {
        cout << it.first << " " << it.second << endl;
    }
}