#include <bits/stdc++.h>
using namespace std;
//////////////////////////////////////
// Create an array using pointer
// int main()
// {
//     int *a;
//     int size;
//     cout << "enter the size of the array" << endl;
//     cin >> size;
//     int len = 0;
//     a = new int[size];
//     for (int j = 0; j < size; j++)
//     {
//         cout << "enter the element at index " << j << endl;
//         cin >> a[j];
//     }
//     for (int i = 0; i < size; i++)
//     {
//         cout << a[i] << " ";
//     }
//     delete[] a;
//     return 0;
// }
//////////////////////////////////////////////////
// Insertion in an array
// int main()
// {
//     int *a;
//     a = new int[5];
//     for (int i = 0; i < 5; i++)
//     {
//         cout << "enter the element at index " << i << endl;
//         cin >> a[i];
//     }
//     cout << "elements in the array are" << endl;
//     for (int i = 0; i < 5; i++)
//     {
//         cout << a[i] << " ";
//     }
//     delete[] a;
//     return 0;
// }
///////////////////////////////////////////////////////
// Deletion in an array
// int main()
// {
//     int *a;
//     int size = 5;
//     a = new int[size];
//     for (int i = 0; i < 5; i++)
//     {
//         cout << "enter the element at index " << i << endl;
//         cin >> a[i];
//     }
//     cout << "elements in the array are" << endl;
//     for (int i = 0; i < 5; i++)
//     {
//         cout << a[i] << " ";
//     }
//     // Deletion of the element
//     int index;
//     cout << "enter the index of the element to be deleted" << endl;
//     cin >> index;
//     int x = 0;
//     if (index >= 0 && index < 5)
//     {
//         for (int i = index; i < 5; i++)
//         {
//             a[i] = a[i + 1]; // Basically pushes the element i to the next one, doesm't delete perticularly but overwrites the index.
//         }
//         size--;
//         cout << "Array after deletion: ";
//         for (int i = 0; i < size; i++)
//         {
//             cout << a[i] << " ";
//         }
//         cout << endl;
//     }
//     else
//     {
//         cout << "invalid index" << endl;
//     }
//     delete[] a;
//     return 0;
// }
///////////////////////////////////////////////////////////
// Linear Search in an array
// int main()
// {
//     int *a;
//     int size;
//     a = new int[size];
//     cout << "enter the number of elements" << endl;
//     cin >> size;
//     for (int i = 0; i < size; i++)
//     {
//         cout << "enter the element at index " << i << endl;
//         cin >> a[i];
//     }
//     int searchElement;
//     bool flag = false;
//     cout << "enter the element to be searched" << endl;
//     cin >> searchElement;
//     for (int i = 0; i < size; i++)
//     {
//         if (searchElement == a[i])
//         {
//             cout << "element found at index " << i << endl;
//             if (i > 0)
//             {
//                 swap(a[i], a[i - 1]); //Transposition
//                 swap(a[i],a[0]); //Move to Head.
//             }
//             flag = true;
//         }
//     }
//     if (flag == false)
//     {
//         cout << "element not found" << endl;
//     }
//     delete[] a;
//     return 0;
// }
////////////////////////////////////////////////////
// Binary Search in an array
// int main()
// {
//     int *a;
//     int size;
//     cout << "enter the number of elements" << endl;
//     cin >> size;
//     a = new int[size];
//     for (int i = 0; i < size; i++)
//     {
//         cout << "enter the element at index " << i << endl;
//         cin >> a[i];
//     }
//     int searchElement;
//     bool flag = false;
//     cout << "enter the element to be searched" << endl;
//     cin >> searchElement;
//     int low = 0, high = size - 1;
//     while (low <= high)
//     {
//         int mid = (low + high) / 2;
//         if (searchElement == a[mid])
//         {
//             cout << "element found at index " << mid << endl;
//             flag = true;
//             break;
//         }
//     }
// }
///////////////////////////////////////////////////////////
// Operations on an ADT
// int main()
// {
//     int a[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
//     // get operation
//     int index;
//     cout << "enter the index of the element to be fetched" << endl;
//     cin >> index;
//     if (index >= 0 && index < 10)
//     {
//         cout << "element at index " << index << " is " << a[index] << endl;
//     }
//     else
//     {
//         cout << "invalid index" << endl;
//     }
//     /////////////////////////////////////////////
//     // Set operation
//     int element;
//     cout << "enter the element" << endl;
//     cin >> element;
//     cout << "enter the index of the element to be set" << endl;
//     cin >> index;
//     if (index >= 0 && index < 10)
//     {
//         a[index] = element;
//         cout << "element set successfully" << endl;
//     }
//     else
//     {
//         cout << "invalid index" << endl;
//     }
//     ////////////////////////////////////////////////////
//     // Max and min operation
//     int max = a[0];
//     for (int i = 1; i < 10; i++)
//     {
//         if (a[i] > max)
//         {
//             max = a[i];
//         }
//     }
//     cout << "maximum element is " << max << endl;
//     int min = a[0];
//     for (int i = 1; i < 10; i++)
//     {
//         if (a[i] < min)
//         {
//             min = a[i];
//         }
//     }
//     cout << "minimum element is " << min << endl;
//     return 0;
//     ///////////////////////////////////////////////////
//     // Sum and average operation
//     int sum = 0;
//     for (int i = 0; i < 10; i++)
//     {
//         sum = sum + a[i];
//     }
//     cout << "sum of the elements is " << sum << endl;
//     cout << "average of the elements is " << (float)sum / 10 << endl;
//     //////////////////////////////////////////////////////////////////////
//     // Shift operations
//     // Reverse Shift
//     int B[10];
//     for (int i = 0; i < 10; i++)
//     {
//         B[i] = a[9 - i];
//     }
//     for (int i = 0; i < 10; i++)
//     {
//         cout << B[i] << " ";
//     }
//     cout << endl;
//     // Left Shift
// }
///////////////////////////
