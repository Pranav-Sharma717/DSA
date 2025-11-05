#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

int main()
{
    int n;
    cin >> n;
    string temp;
    cin >> temp; // "shuffled"

    cin.ignore();
    vector<string> shuffled(n);
    for (int i = 0; i < n; i++)
        getline(cin, shuffled[i]);

    cin >> temp; // "original"
    cin.ignore();
    vector<string> original(n);
    for (int i = 0; i < n; i++)
        getline(cin, original[i]);

    // Map original instructions to their positions
    unordered_map<string, int> pos;
    for (int i = 0; i < n; i++)
    {
        pos[original[i]] = i;
    }

    // Convert shuffled to index sequence
    vector<int> indexSeq;
    for (int i = 0; i < n; i++)
    {
        indexSeq.push_back(pos[shuffled[i]]);
    }

    // Count max number of increasing contiguous segments
    int blocks = 1;
    for (int i = 1; i < n; i++)
    {
        if (indexSeq[i] != indexSeq[i - 1] + 1)
            blocks++;
    }

    cout << blocks - 1 << endl; // min cuts = blocks - 1
    return 0;
}
