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

void BinSort(int A[], int n)
{
    int max = findMax(A, n);
    if (max == -1)
        return;

    int *count = new int[max + 1]{0};

    // Count each element's frequency
    for (int i = 0; i < n; i++)
    {
        count[A[i]]++;
    }

    int index = 0;
    // Place elements back into array
    for (int i = 0; i <= max; i++)
    {
        while (count[i] > 0)
        {
            A[index++] = i;
            count[i]--;
        }
    }

    delete[] count;
}

int main()
{
    int arr[] = {4, 2, 2, 8, 3, 3, 1};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << "Original array: ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    BinSort(arr, n);

    cout << "Sorted array: ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
