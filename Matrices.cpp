//  Diagonal matrix
//  To define a matrix we will use two dimensional array
//  To define a digonal matrix, we can use 1D array to store the non-zero elements

// Defining Diagonal matrix of 4X4, we need set function and get function to set data and to get the data.
#include <bits/stdc++.h>
using namespace std;
// struct Matrices
// {
//     int A[10];
//     int n;
// };

// void Set(struct Matrices *m, int i, int j, int x)
// {
//     if (i == j)
//     {
//         m->A[i - 1] = x;
//     }
// }

// int get(struct Matrices m, int i, int j)
// {
//     if (i == j)
//         return m.A[i - 1];
//     else
//         return 0;
// }

// void Display(struct Matrices m)
// {
//     int i, j;
//     for (i = 0; i < m.n; i++)
//     {
//         for (j = 0; j < m.n; j++)
//         {
//             if (i == j)
//             {
//                 cout << m.A[i] << " ";
//             }
//             else
//             {
//                 cout << "0 ";
//             }
//         }
//         cout << endl;
//     }
// }

// int main()
// {
//     struct Matrices m;
//     m.n = 4;
//     Set(&m, 1, 1, 5);
//     Set(&m, 2, 2, 8);
//     Set(&m, 3, 3, 17);
//     Set(&m, 4, 4, 2);
//     // Set(&m, 21, 2, 21);
//     cout << get(m, 2, 2) << endl;
//     Display(m);
//     return 0;
// }

// class Diagonal
// {
// private:
//     int n;
//     int *A;

// public:
//     Diagonal()
//     {
//         n = 2;
//         A = new int[n];
//     } // Constructor
//     Diagonal(int n)
//     {
//         this->n = n; // Here the second n is the local parameter
//         A = new int[n];
//     } // Parameterized constructor
//     ~Diagonal()
//     {
//         delete[] A;
//     } // Destructor
//     void Set(int i, int j, int x);
//     int Get(int i, int j);
//     void Display();
// };

// void Diagonal::Set(int i, int j, int x)
// {
//     if (i == j)
//     {
//         A[i - 1] = x;
//     }
// }
// int Diagonal::Get(int i, int j)
// {
//     if (i == j)
//     {
//         return A[i - 1];
//     }
//     return 0;
// }
// void Diagonal::Display()
// {
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 0; j < n; j++)
//         {
//             if (i == j)
//             {
//                 cout << A[i] << " ";
//             }
//             else
//                 cout << "0 ";
//         }
//         cout << endl;
//     }
// }

// int main()
// {
//     Diagonal d(4);

//     d.Set(1, 1, 7);
//     d.Set(2, 2, 7);
//     d.Set(3, 3, 7);
//     d.Set(4, 4, 7);

//     d.Display();
//     return 0;
// }
///////////////////////////////////////////////////////////

// Lower Triangular Matrix
// M[i,j]=0 if i<j
// M[i,j]= non-zero if i>j
//  Indexing of M[i,j] = [i(i-1)/2]+(j-1)

struct Matrices
{
    int *A;
    int n;
};

void Set(struct Matrices *m, int i, int j, int x)
{
    if (i >= j)
    {
        m->A[i * (i - 1) / 2 + j - 1] = x;
    }
}

int Get(struct Matrices m, int i, int j)
{
    if (i >= j)
    {
        return m.A[i * (i - 1) / 2 + j - 1];
    }
    else
        return 0;
}

void Display(struct Matrices m)
{
    int i, j;
    for (i = 1; i <= m.n; i++)
    {
        for (j = 1; j <= m.n; j++)
        {
            if (i >= j)
            {
                cout << m.A[i * (i - 1) / 2 + j - 1] << " ";
            }
            else
                cout << "0 ";
        }
        cout << endl;
    }
}

int main()
{
    struct Matrices m;
    cout << "Enter the dimensions" << endl;
    cin >> m.n;
    m.A = new int[m.n * (m.n + 1) / 2];
    int x;
    cout << "Enter all elements";
    for (int i = 1; i <= m.n; i++)
    {
        for (int j = 1; j <= m.n; j++)
        {
            cin >> x;
            Set(&m, i, j, x);
        }
    }
    cout << endl;
    Display(m);

    delete[] m.A;
    return 0;
}
/////////////////////////////////////////////////////////
