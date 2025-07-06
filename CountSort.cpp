#include <iostream>
using namespace std;
int findMax(int arr[], int size)
{
    if (size <= 0)
    {

        return -1;
    }

    int max = arr[0];

    for (int i = 1; i < size; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }

    return max;
}

void CountSort(int A[], int n)
{
    int max;
    int *c;
    max = findMax(A, n);
    c = new int[max + 1];
    for (int i = 0; i <= max; i++)
    {
        c[i] = 0;
    }
    for (int i = 0; i < n; i++)
    {
        c[A[i]]++;
    }
    int i = 0;
    int j = 0;
    while (i < max + 1)
    {
        if (c[i] > 0)
        {
            A[j++] = i;
            c[i]--;
        }
        else
        {
            i++;
        }
    }
}
int main()
{
    int A[] = {4, 2, 2, 8, 3, 3, 16};
    int n = sizeof(A) / sizeof(A[0]);
    CountSort(A, n);
    for (int i = 0; i < n; i++)
    {
        cout << A[i] << " ";
    }
}