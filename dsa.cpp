// #include <iostream>
// using namespace std;
//  int main()
//  {
//      int B[5] = {2, 9, 1, 4, 2};
//      int i;
//      for (i = 0; i < 5; i++)
//      {
//          cout << B[i] << " ";
//      }
//      return 0;
//  }
/*#include <iostream>
using namespace std;
int main()
{
    int a[5];
    a[0] = 12;
    a[1] = 15;
    a[2] = 25;

    cout << sizeof(a[1]) << endl;
    cout << sizeof(a) << endl;
    return 0;
}*/

/*#include <iostream>
using namespace std;
int main()
{
    int a[5] = {1, 2};
    for (int i = 0; i < 5; i++)
    {
        cout << a[i] << endl;
    }
    return 0;
}*/

// iterating trhough each element of an array

/*#include <iostream>
using namespace std;
int main()
{
    int a[5] = {1, 2, 3, 2, 5};
    for (int i : a)
    {
        cout << i << endl;
    }
    return 0;
}*/

#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "enter the size";
    cin >> n;
    int A[n];
    A[0] = 7;
    A[1] = 21;

    for (int x : A)
    {
        cout << x << endl;
    }
}

/* #include <iostream>
using namespace std;

int main()
    // Variable to store user input
    int p;

    // Prompt the user to enter something4hgj
    cout << "Enter something: ";

    // Take input from the user
    cin >> p;

    // Print the input
    cout << "You entered: " << p << endl;

    return 0;
}*/
