#include <iostream>
using namespace std;

void Shellsort(int A[], int n)
{
    int gap, i, j;
    for (gap = n / 2; gap > 0; gap /= 2) // Reduce gap size
    {
        for (i = gap; i < n; i++) // Iterate through the array
        {
            int temp = A[i]; // Temporarily store the current element
            j = i;

            // Perform the insertion sort logic with the current gap
            while (j >= gap && A[j - gap] > temp)
            {
                A[j] = A[j - gap]; // Shift element at `j-gap` to position `j`
                j -= gap;          // Move to the next position based on gap
            }

            A[j] = temp; // Place the temporary element in its correct position
        }
    }
}

int main()
{
    int A[] = {11, 13, 7, 12, 16, 9, 24, 5, 10, 3};
    int n = sizeof(A) / sizeof(A[0]); // Calculate the size of the array

    Shellsort(A, n); // Call Shell Sort function

    cout << "Sorted array: ";
    for (int i = 0; i < n; i++) // Print sorted array
    {
        cout << A[i] << " ";
    }
    cout << endl;

    return 0;
}
