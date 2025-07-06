#include <iostream>
using namespace std;
int Partition(int A[], int l, int h)
{
    int pivot = A[l];
    int i = l, j = h;
    do
    {
        do
        {
            i++;
        } while (A[i] <= pivot);
        do
        {
            j--;
        } while (A[j] > pivot);
        if (i < j)
        {
            swap(A[i], A[j]);
        }
    } while (i < j);
    swap(A[l], A[j]);
    return j;
}
void QuickSort(int A[], int l, int h)
{
    if (l < h)
    {
        int p = Partition(A, l, h);
        QuickSort(A, l, p);
        QuickSort(A, p + 1, h);
    }
}
int main()
{
    int A[] = {20, 10, 40, 50, 100, 80, INT8_MAX};
    int n = sizeof(A) / sizeof(A[0]) - 1;
    QuickSort(A, 0, n);
    for (int i = 0; i < n; i++)
    {
        cout << A[i] << " ";
    }
}
