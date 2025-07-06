#include <iostream>
using namespace std;

void merge(int A[], int l, int mid, int h)
{
    int n1 = mid - l + 1;
    int n2 = h - mid;
    int *L = new int[n1];
    int *R = new int[n2];

    // Copy elements to temporary arrays L[] and R[]
    for (int i = 0; i < n1; i++)
        L[i] = A[l + i];
    for (int j = 0; j < n2; j++)
        R[j] = A[mid + 1 + j];

    int i = 0, j = 0, k = l;

    // Merge the two subarrays back into A[l..h]
    while (i < n1 && j < n2)
    {
        if (L[i] <= R[j])
        {
            A[k++] = L[i++];
        }
        else
        {
            A[k++] = R[j++];
        }
    }

    // Copy the remaining elements of L[], if any
    while (i < n1)
    {
        A[k++] = L[i++];
    }

    // Copy the remaining elements of R[], if any
    while (j < n2)
    {
        A[k++] = R[j++];
    }

    // Free the memory allocated for L[] and R[]
    delete[] L;
    delete[] R;
}

void Imergesort(int A[], int n)
{
    int p, i, l, mid, h;

    // Iteratively merge subarrays in increasing size
    for (p = 2; p <= n; p *= 2)
    {
        for (i = 0; i + p - 1 < n; i += p)
        {
            l = i;
            h = i + p - 1;
            mid = (l + h) / 2;
            merge(A, l, mid, h);
        }
    }

    // Handle the case where there are remaining elements after the last merge
    if (p / 2 < n)
    {
        merge(A, 0, p / 2 - 1, n - 1);
    }
}

int main()
{
    int A[] = {38, 27, 43, 3, 9, 82, 10, INT8_MAX};
    int n = sizeof(A) / sizeof(A[0]);
    Imergesort(A, n);
    cout << "Sorted array: ";
    for (int i = 0; i < n; i++)
        cout << A[i] << " ";
    cout << endl;
    return 0;
}