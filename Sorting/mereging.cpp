#include <iostream>
using namespace std;

void merge(int A[], int B[], int C[], int m, int n)
{
    int i, j, k;
    i = j = k = 0;
    while (i < m && j < n)
    {
        if (A[i] < B[j])
            C[k++] = A[i++];
        else
            C[k++] = B[j++];
    }
    // Add remaining elements of A, if any
    for (; i < m; i++)
    {
        C[k++] = A[i];
    }
    // Add remaining elements of B, if any
    for (; j < n; j++)
    {
        C[k++] = B[j];
    }

    // Print the merged array
    cout << "Merged array: ";
    for (int i = 0; i < m + n; i++)
    {
        cout << C[i] << " ";
    }
    cout << endl;
}

int main()
{
    int A[3] = {1, 2, 3};
    int B[3] = {4, 5, 6};
    int m = 3;
    int n = 3;
    int C[m + n]; // Create a merged array with size m + n

    // Call merge function with A, B, C, m, and n
    merge(A, B, C, m, n);

    return 0;
}
