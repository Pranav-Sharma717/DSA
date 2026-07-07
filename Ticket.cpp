#include <iostream>
using namespace std;
string ticnum(string str1)
{
    string ans = "";
    for (int i = 0; i < str1.length(); i++)
    {
        if (str1[i] == 'E' && str1[i + 1] == 'F')
        {
            i++;
        }
        else if (str1[i] == 'G')
        {
            continue;
        }
        else
        {
            ans.push_back(str1[i]);
        }
    }
    return ans;
}

string ticnum_twopointer(string str1)
{
    string ans = "";
    int m = 0;
    int n = 1;

    while (m < str1.length() && n < str1.length())
    {
        if (str1[m] == 'E' && str1[n] == 'F')
        {
            m += 2;
            n += 2;
        }
        else if (str1[m] == 'G')
        {
            m++;
            n++;
        }
        else
        {
            ans.push_back(str1[m]);
            m++;
            n++;
        }
    }

    if (m < str1.length() && str1[m] != 'G')
    {
        ans.push_back(str1[m]);
    }

    return ans;
}

int main()
{
    string input;
    cout << "Enter a string: ";
    cin >> input;

    cout << "Result: " << ticnum(input) << endl;
    cout << "Result in twopointer: " << ticnum_twopointer(input) << endl;
    return 0;
}