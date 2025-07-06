#include <bits/stdc++.h>
using namespace std;

// int main()
// {
//     int a;
//     cin >> a;
//     int b;
//     cin >> b;
//     int c = a + b;
//     cout << c;
//     return 0;
// }

/////////////////////////////////////////////////////////
// Pairs
// int main()
// {
//     pair<int, int> p1 = {1, 2};
//     cout << p1.first << " " << p1.second << endl;
//     // nested pairs:
//     pair<int, pair<int, int>> p2 = {1, {2, 3}};
//     cout << p2.first << " " << p2.second.second << endl;
//     // nested arrays of pair.
//     pair<int, int> arr[] = {{1, 2}, {2, 3}, {51, 1}};
//     cout << p1.first << endl;
// }
//////////////////////////////////////////////////////////

// Vectors
// int main()
// {
//     vector<int> v;
//     v.push_back(1);    // pushes 1 in the back of an array
//     v.emplace_back(2); // dynamically allocates 2 at the back of the array.
//     // emplace_back is much faster than push_back
//     vector<pair<int, int>> vec;
//     vec.push_back({1, 2});
//     vec.emplace_back(2, 3);

//     vector<int> Vec(5, 100); // This is allocation of container of size 5 with 5 instances of 100.{100,100,100,100,100}

//     // copy vector:
//     vector<int> v1 = {1, 2, 3, 4};
//     vector<int> v2(v1);

//     // To access elements in a vector:
//     // Iterators:
//     vector<int>::iterator it = v.begin(); // Will point it to the start of that vector
//     it++;
//     cout << *(it) << " "; // * is used to get the value of the memory by v.begin().

//     it = it + 2;
//     cout << *(it) << " ";

//     // v.end() will point to memory space after the last element.
//     // EG: {1,2,3} end will point to thememory after 3.

//     vector<int>::iterator it = v.end();

//     cout << v.back() << " ";
//     // v.back() is used to point to the last element of vector v.

//     for (auto it = v.begin(); it != v.end(); it++)
//     {
//         cout << *(it) << " ";
//     }
// }

// Deletion in vector:
// int main()
// {
//     vector<int> v = {1, 2, 3, 4, 5};
//     v.erase(v.begin() + 1);
//     for (auto it = v.begin(); it != v.end(); it++)
//     {
//         cout << *(it) << " ";
//     }
//     v.erase(v.begin(), v.begin() + 2);
//     for (auto i = v.begin(); i != v.end(); i++)
//     {
//         cout << *(i) << " ";
//     }
// }

// Insertion in a vector
// int main()
// {
//     vector<int> v = {10, 20, 30, 2};
//     v.insert(v.begin(), 300);
//     v.insert(v.begin() + 1, 2, 10);
//     for (auto i = v.begin(); i != v.end(); i++)
//     {
//         cout << *(i) << " ";
//     }
//     cout << v.size();
//     v.pop_back(); // will pop 2

//     vector<int> v2 = {1, 2};
//     v.swap(v2);
//     v.clear();         // erases the entire vector.
//     cout << v.empty(); // checks weather the array or vector is empty
// }
////////////////////////////////////////////////////////////

// Lists
// int main()
// {
//     list<int> ls;
//     ls.push_back(2);    //{2}
//     ls.emplace_front(); //{0,4}
//     ls.push_front(5);   //{5,0,4}
//     for (auto i = ls.begin(); i != ls.end(); i++)
//     {
//         cout << *(i) << " ";
//     }
// }
// Rest every operations is same as vectors
///////////////////////////////////////////////////

// Stack
// int main()
// {
//     stack<int> st;
//     st.push(1);    //{1}
//     st.push(2);    //{2}
//     st.emplace(5); //{1,2,5}
//     st.pop();      //{1,2}
//     while (!st.empty())
//     {
//         cout << st.top() << " "; // O/P: 2 1
//         st.pop();
//     }
// }
////////////////////////////////////////////////////////////
// Queue
// int main()
// {
//     queue<int> q;
//     q.push(1);     //{1}
//     q.push(2);     //{1,2}
//     q.emplace(4);  //{1,2,4}
//     q.back() += 5; // adds 4+5
//     cout << q.back() << " ";
//     q.pop(); // 1 is popped {2,9}
//     while (!q.empty())
//     {
//         cout << q.front() << " ";
//         q.pop();
//     }
// }
////////////////////////////////////////////////////
// SET
// int main()
// {
//     set<int> st;
//     st.insert(1); // 1
//     st.insert(2); // 2
//     st.insert(2); // doesn't insert anything.
//     st.insert(3); // 3

//     auto it = st.find(3);           // returns the iterator which points to 3.
//     auto it = st.find(6);           // returns st.end() which is the point after the last element of that set.
//     int cnt = st.count(1);          // will count the number of '1' present.
//     st.erase(3);                    // will erase 3.
//     st.erase(st.begin(), st.end()); // erases everything.
//     // Every other function is like vector.
//     // Multiset
//     multiset<int> ms;
//     ms.insert(1); //{1}
//     ms.insert(2); //{1,2}
//     ms.insert(1); //{1,1,2}
//     // rest everything is the same

//     // unorderd set will store the set as random values.
//     unordered_set<int> us;
//     us.insert(1); // 1
//     us.insert(2); // 2
// }
////////////////////////////////////////////////////////

// Map
int main()
{
    map<int, int> m; // Declaring a map with int keys and int values

    m[1] = 2;         // Inserts (1,2)
    m.insert({3, 1}); // Inserts (3,1)
    m.insert({2, 4}); // Inserts (2,4)

    // Iterating and printing the map
    for (auto i : m)
    {
        cout << i.first << " " << i.second << endl;
    }

    return 0;

    // Map can be visualized as:
    //  {1,2}
    //  {2,4}
    //  {3,1}
}
