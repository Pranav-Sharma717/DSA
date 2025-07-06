// ASCII CODE
//{A:65, B:66, ..., Z:90}, {a:97,b:98,...z:122}, {0:48,1:49,.....9:57}, {return key: 10, space: 13, esc:27}
// Declaratuon of Char
#include <bits/stdc++.h>
using namespace std;
// int main()
// {
//     char temp = 'A';
//     printf("%d", temp); // Diplays the ascii code of character
//     cout << temp << endl;
//     char z[5] = {'A', 'b', 'C', '\0'};
//     char p[] = {65, 66, 67, '\0'};
//     cout << z << " ";
//     cout << endl;
//     cout << p;
//     cout << endl;
// }
////////////////////////////////////
// Function/operations on a string
// Length of a string
// int main()
// {
//     char s[] = "welcome";
//     int i = 0;
//     while (s[i] != '\0')
//     {
//         if (s[i] >= 65 && s[i] <= 90)
//             s[i] = s[i] + 32; // Changing the string to upper case
//         else if (s[i] >= 'a' && s[i] <= 122)
//         {
//             s[i] -= 32;
//         }
//         i++;
//     }
//     cout << "length is " << i << " " << endl;
//     cout << "Changing to upper case, we get " << s << " " << endl;
// }
///////////////////////////////////////////////
// Counting number of words and vowels in a string
// int main()
// {
//     char A[] = "how are you";
//     int i;
//     int vowel = 0;
//     int words = 0;
//     for (i = 0; A[i] != '\0'; i++)
//     {
//         if (A[i] == 'a' || A[i] == 'e' || A[i] == 'i' || A[i] == 'o' || A[i] == 'u')
//         {
//             vowel++;
//         }
//         if (A[i] == ' ')
//         {
//             words++;
//         }
//     }
//     cout << "the number of vowels are " << vowel << endl;
//     cout << "the number of words are " << words + 1 << endl;
// }
//////////////////////////////////////////////////////////
// Valdiate a string;No special character present
// int main()
// {
//     char s[] = "welcome";
//     int i = 0;
//     int c = 0;

//     while (s[i] != '\0')
//     {
//         if (!((s[i] >= 'A' && s[i] <= 'Z') || (s[i] >= 'a' && s[i] <= 'z')))
//         {
//             c++; // Count invalid characters
//         }
//         i++;
//     }

//     if (c > 0)
//         cout << "Not a valid string" << endl;
//     else
//         cout << "Valid string" << endl;
// }
////////////////////////////////////////////
// Reverse a string using copy array/string
// int main()
// {
//     char a[] = "python";
//     char b[7];
//     int i;
//     int n = strlen(a);
//     for (i = 0; i < n; i++)
//     {
//         b[i] = a[n - i - 1];
//     }
//     b[n] = '\0';
//     printf("%s", b);
// }

// Reverse a string by modifying the same string.
// Palindrome of a string
// void palindrome(char a[], char b[], bool &p)
// {
//     int t = strlen(a);
//     int count = 0;
//     p = true;
//     for (int i = 0; i < t - 1; i++)
//     {
//         if (a[i] != b[i])
//             p = false;
//         return;
//     }
// }
// int main()
// {
//     char A[] = "lol";
//     int t = strlen(A);
//     char B[] = "pom";
//     int j = t - 1;
//     int i = 0;
//     char b;
//     while (i < j)
//     {
//         b = A[i];
//         A[i] = A[j];
//         A[j] = b;
//         i++;
//         j--;
//     }

//     printf("%s", A);
//     cout << endl;
//     bool n = true;
//     palindrome(A, B, n);
//     if (n == false)
//     {
//         cout << "not a palindrome" << endl;
//     }
//     else
//     {
//         cout << "It is a palindrome of " << A << endl;
//     }
// }
////////////////////////////////////////////////////////
// Finding the duplicates in a string
// int main()
// {
//     char A[] = "finding";
//     int count = 0;
//     int n = strlen(A);
//     for (int i = 0; i < n - 1; i++)
//     {
//         for (int j = i + 1; j < n - 1; j++)
//         {
//             if (A[i] == A[j])
//                 count++;
//         }
//     }
//     cout << "The number of duplicate elements is " << count << endl;
// }

// Duplicates using hash tables:
// int main()
// {
//     char A[] = "finding";
//     int H[26] = {0};
//     int i;
//     for (i = 0; A[i] != '\0'; i++)
//     {
//         H[A[i] - 97] += 1;
//     }
//     for (i = 0; i < 26; i++)
//     {
//         if (H[i] > 1)
//         {
//             printf("%c", i + 97);
//             printf("%d", H[i]);
//         }
//     }
// }
//////////////////////////////////////////////////////////////////
// Permutations of a string
// void perm(char s[], int k)
// {
//     static int A[10] = {0};
//     static char Res[10];
//     int i;
//     if (s[k] == '\0')
//     {
//         Res[k] = '\0';
//         cout << Res << "\n";
//     }
//     else
//     {
//         for (i = 0; s[i] != '\0'; i++)
//         {
//             if (A[i] == 0)
//             {
//                 Res[k] = s[i];
//                 A[i] = 1;
//                 perm(s, k + 1);
//                 A[i] = 0;
//             }
//         }
//     }
// }
// int main()
// {
//     char s[] = "ABC";
//     cout << "Permutations of ABC are:\n";
//     perm(s, 0);
// }
////////////////////////////////////////////////////
