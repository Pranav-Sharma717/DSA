// Linear Search
#include <iostream>
using namespace std;
int Lsearch(int list[], int n, int key)
{
    for (int i = 0; i < n; i++)
    {
        if (list[i] == key)
        {
            return i; // Return the position of the key if found
        }
    }
};
int main()
{
    int n, i, key, list[25], pos;
    cout << "Enter the number of elements in the list: ";
    cin >> n;
    cout << "Enter the elements in the list: ";
    for (i = 0; i < n; i++)
        cin >> list[i];
    cout << "Enter the element to be searched: ";
    cin >> key;
    pos = Lsearch(list, n, key);
    if (pos == -1)
    {
        cout << "Element not found in the list.";
    }
    else
    {
        cout << "Element found at the index of " << pos << " in the list.";
    }
}