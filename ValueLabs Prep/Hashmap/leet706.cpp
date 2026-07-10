// Defining a hashmap

// #include <bits/stdc++.h>
// using namespace std;

// class MyHashMap
// {
// public:
//     unordered_map<int, int> obj;
//     MyHashMap()
//     {
//     }
//     void put(int key, int value)
//     {
//         obj[key] = value;
//     }
//     int get(int key)
//     {
//         auto it = obj.find(key);
//         if (it != obj.end())
//         {
//             return it->second;
//         }
//         return -1;
//     }
//     void remove(int key)
//     {
//         obj.erase(key);
//     }
// };

// int main()
// {
//     MyHashMap map;
//     map.put(1, 2);
//     map.put(2, 3);
//     cout << map.get(1) << endl;
//     map.remove(2);
//     cout << map.get(2) << endl;
//     return 0;
// }

// Defining a hashset
#include <bits/stdc++.h>
using namespace std;
class MyHashSet
{
public:
    set<int> Myhashset;
    MyHashSet()
    {
    }
    void add(int key)
    {
        Myhashset.insert(key);
    }
    void remove(int key)
    {
        Myhashset.erase(key);
    }
    bool found(int key)
    {
        auto it = Myhashset.find(key);
        if (it != Myhashset.end())
            return true;
        return false;
    }
};

int main()
{
    MyHashSet myset;
    myset.add(2);
    myset.add(3);
    myset.add(2);
    myset.remove(2);
    cout << myset.found(3) << endl;
}