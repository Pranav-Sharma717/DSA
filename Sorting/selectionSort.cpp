#include <iostream>
using namespace std;
void selectionSort(int A[], int n)
{
    int i;
    int j;
    int k;
    for (i = 0; i < n - 1; i++)
    {
        for (j = k = i; j < n; j++)
        {
            if (A[j] < A[k])
            {
                k = j;
            }
        }
        swap(A[i], A[k]);
    }
}
int main()
{
    int A[] = {5, 2, 8, 1, 0};
    int n = sizeof(A) / sizeof(A[0]);
    selectionSort(A, n);
    for (int i = 0; i < n; i++)
    {
        cout << A[i] << " ";
    }
}
