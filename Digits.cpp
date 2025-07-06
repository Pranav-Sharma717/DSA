// Extracion of digits is done by %10.
#include <bits/stdc++.h>
using namespace std;

/////////////////////////////////////////////
// Counting number of digits

// int main()
// {
//     int a;
//     cout << "enter the number" << endl;
//     cin >> a;
//     int b = 0;
//     while (a > 0)
//     {
//         int lastdigit = a % 10;
//         b = b + 1;
//         a = a / 10;
//     }
//     cout << "The number of digits is " << b << endl;
// }
/////////////////////////////////////////

// Reverse of a number
// int main()
// {
//     int a;
//     cout << "enter a number" << endl;
//     cin >> a;
//     int b = 0;
//     while (a != 0)
//     {
//         int lastdigit = a % 10;
//         if (b > INT_MAX / 10 || (b == INT_MAX / 10 && lastdigit > 7))
//             return 0;
//         if (b < INT_MAX / 10 || (b == INT_MAX / 10 && lastdigit < -8))
//             return 0;
//         b = (b * 10) + lastdigit;
//         a = a / 10;
//     }
//     cout << b << endl;
// }
/////////////////////////////////////////////////////////////////
// Palindrome problem
// int main()
// {
//     int a;
//     cout << "enter a number" << endl;
//     cin >> a;
//     int p = a;
//     long b = 0;
//     if (a < 0)
//     {
//         cout << "not a palindrome" << endl;
//     }
//     while (p != 0)
//     {
//         int lastdigit = p % 10;
//         b = (b * 10) + lastdigit;
//         p = p / 10;
//     }
//     cout << b << endl;
//     if (a == b)
//     {
//         cout << "it is a palindrome" << endl;
//     }
//     if (a > 0 && a != b)
//     {
//         cout << "not a palindrome";
//     }
//     return 0;
// }
//////////////////////////////////////////
// Amstrong number
// int main()
// {
//     int a;
//     cout << "enter a number" << endl;
//     cin >> a;
//     int temp = a;
//     int sum = 0;
//     while (a != 0)
//     {
//         int lastdigit = a % 10;
//         sum = sum + (lastdigit * lastdigit * lastdigit);
//         a = a / 10;
//     }
//     if (sum == temp)
//     {
//         cout << "it is an amstrong number" << endl;
//     }
//     else
//     {
//         cout << "it is not an amstrong number" << endl;
//     }
//     return 0;
// }
/////////////////////////////////////////////////////////
// Print divisors
// int main()
// {
//     int a;
//     cout << "enter your number" << endl;
//     cin >> a;
//     for (int i = 1; i <= a; i++)
//     {
//         if (a % i == 0)
//         {
//             cout << i << " ";
//         }
//     }
// }
// Optimized print divisors
// int main()
// {
//     int a;
//     cout << "enter your number" << endl;
//     cin >> a;
//     vector<int> l;
//     for (int i = 1; i <= sqrt(a); i++)
//     {
//         if (a % i == 0)
//         {
//             l.push_back(i);
//             if (i != a / i)
//             {
//                 l.push_back(a / i);
//             }
//         }
//     }
//     sort(l.begin(), l.end());
//     for (auto i = l.begin(); i != l.end(); i++)
//     {
//         cout << *(i) << " ";
//     }
// }

// Prime numbers
// int main()
// {
//     int a;
//     cout << "enter a number" << endl;
//     cin >> a;
//     int cnt = 0;
//     for (int i = 1; i <= a; i++)
//     {
//         if (a % i == 0)
//         {
//             cnt += 1;
//         }
//     }
//     if (cnt == 2)
//     {
//         cout << "it is a prime number" << endl;
//     }
//     else
//     {
//         cout << "not a prime" << endl;
//     }
// }
///////////////////////////////
// HCF and GCD
int main()
{
    int a, b;
    cout << "enter two numbers" << endl;
    cin >> a >> b;
    int hcf = 1;
    int gcd = 1;
    for (int i = min(a, b); i >= 1; i--)
    {
        if (a % i == 0 && b % i == 0)
        {
            gcd = i;
            break;
        }
    }
    int lcm = (a / gcd) * b;
    cout << lcm << endl;
    cout << gcd << endl;
}