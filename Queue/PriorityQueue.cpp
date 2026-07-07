// Simple Priority Queue implementations
// 1) GroupedPriorityQueue: elements are stored in separate queues per priority.
//    Dequeue happens from highest-priority non-empty group.
// 2) UngroupedPriorityQueue: single container, can be kept sorted or unsorted.

#include <bits/stdc++.h>
using namespace std;

template <typename T>
class GroupedPriorityQueue
{
    // priorities are 0..P-1, higher value => higher priority
    vector<queue<T>> groups;
    int P;

public:
    GroupedPriorityQueue(int priorities) : P(priorities) { groups.resize(P); }
    void push(const T &val, int priority)
    {
        if (priority < 0)
            priority = 0;
        if (priority >= P)
            priority = P - 1;
        groups[priority].push(val);
    }
    bool empty() const
    {
        for (const auto &q : groups)
            if (!q.empty())
                return false;
        return true;
    }
    T top() const
    {
        for (int i = P - 1; i >= 0; --i)
            if (!groups[i].empty())
                return groups[i].front();
        throw out_of_range("empty");
    }
    void pop()
    {
        for (int i = P - 1; i >= 0; --i)
            if (!groups[i].empty())
            {
                groups[i].pop();
                return;
            }
        throw out_of_range("empty");
    }
};

template <typename T>
class UngroupedPriorityQueue
{
    // store pair<value, priority>
    vector<pair<T, int>> data;
    bool keep_sorted; // if true, insertion O(n), pop O(1). else insertion O(1), pop O(n).
public:
    UngroupedPriorityQueue(bool sorted = false) : keep_sorted(sorted) {}
    void push(const T &val, int priority)
    {
        if (keep_sorted)
        {
            // insert so that highest priority at back (so pop can pop_back)
            auto it = data.end();
            while (it != data.begin())
            {
                if ((it - 1)->second <= priority)
                    break; // keep greater priorities to back
                --it;
            }
            data.insert(it, make_pair(val, priority));
        }
        else
        {
            data.emplace_back(val, priority);
        }
    }
    bool empty() const { return data.empty(); }
    pair<T, int> top_with_priority() const
    {
        if (data.empty())
            throw out_of_range("empty");
        if (keep_sorted)
            return data.back();
        // find max priority
        auto it = max_element(data.begin(), data.end(), [](auto &a, auto &b)
                              { return a.second < b.second; });
        return *it;
    }
    T top() const { return top_with_priority().first; }
    void pop()
    {
        if (data.empty())
            throw out_of_range("empty");
        if (keep_sorted)
        {
            data.pop_back();
            return;
        }
        auto it = max_element(data.begin(), data.end(), [](auto &a, auto &b)
                              { return a.second < b.second; });
        data.erase(it);
    }
};

// Minimal demonstration (can be removed in library usage)
int main()
{
    GroupedPriorityQueue<string> gpq(5);
    gpq.push("low", 1);
    gpq.push("high", 4);
    gpq.push("mid", 2);
    while (!gpq.empty())
    {
        cout << gpq.top() << "\n";
        gpq.pop();
    }

    UngroupedPriorityQueue<string> upq_sorted(true);
    upq_sorted.push("a", 1);
    upq_sorted.push("b", 3);
    upq_sorted.push("c", 2);
    while (!upq_sorted.empty())
    {
        cout << upq_sorted.top() << "\n";
        upq_sorted.pop();
    }

    UngroupedPriorityQueue<string> upq_unsorted(false);
    upq_unsorted.push("a", 1);
    upq_unsorted.push("b", 3);
    upq_unsorted.push("c", 2);
    while (!upq_unsorted.empty())
    {
        cout << upq_unsorted.top() << "\n";
        upq_unsorted.pop();
    }
    return 0;
}
