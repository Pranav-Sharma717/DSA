#include <iostream>
#include <list>
#include <vector>

class HashTable
{
    int BUCKET; // Number of buckets
    std::vector<std::list<int>> table;

public:
    HashTable(int b) : BUCKET(b)
    {
        table.resize(BUCKET);
    }

    // Hash function
    int hashFunction(int key)
    {
        return key % BUCKET;
    }

    void insertItem(int key)
    {
        int index = hashFunction(key);
        table[index].push_back(key);
    }

    void deleteItem(int key)
    {
        int index = hashFunction(key);
        table[index].remove(key);
    }

    void displayHash()
    {
        for (int i = 0; i < BUCKET; i++)
        {
            std::cout << i;
            for (auto x : table[i])
                std::cout << " --> " << x;
            std::cout << std::endl;
        }
    }
};

int main()
{
    int keys[] = {15, 11, 27, 8, 12};
    int n = sizeof(keys) / sizeof(keys[0]);

    HashTable h(7); // 7 is the size of the hash table
    for (int i = 0; i < n; i++)
        h.insertItem(keys[i]);

    h.deleteItem(12);
    h.displayHash();

    return 0;
}