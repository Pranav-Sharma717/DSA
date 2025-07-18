#include <stdio.h>
#define SIZE 10
int hash(int key)
{
    return key % SIZE;
}
int probe(int H[], int key)
{
    int index = hash(key);
    int i = 0;
    while (H[(index + i) % SIZE] != 0)
        i++;
    return (index + 1) % SIZE;
}
void Insert(int H[], int key)
{
    int index = hash(key);
    if (H[index] != 0)
    {
        index = probe(H, key);
    }
    H[index] = key;
}
int search(int H[], int key)
{
    int index = hash(key);
    int i = 0;
    while (H[(index + i) % SIZE] != key)
    {
        i++;
        return (index + i) % SIZE;
    }
}
int main()
{
    int HT[10] = {0};
    Insert(HT, 12);
    Insert(HT, 25);
    Insert(HT, 35);
    Insert(HT, 26);
    for (int i = 0; i < SIZE; i++)
    {
        printf("HT[%d]=%d\n", i, HT[i]);
    }
    printf("\nKey found at %d\n", search(HT, 35));
    return 0;
}