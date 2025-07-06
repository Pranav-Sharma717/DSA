struct Matrices
// {
//     int *A;
//     int n;
// };

// void Set(struct Matrices *m, int i, int j, int x)
// {
//     if (i >= j)
//     {
//         m->A[i * (i - 1) / 2 + j - 1] = x;
//     }
// }

// int Get(struct Matrices m, int i, int j)
// {
//     if (i >= j)
//     {
//         return m.A[i * (i - 1) / 2 + j - 1];
//     }
//     else
//         return 0;
// }

// void Display(struct Matrices m)
// {
//     int i, j;
//     for (i = 1; i <= m.n; i++)
//     {
//         for (j = 1; j <= m.n; j++)
//         {
//             if (i >= j)
//             {
//                 cout << m.A[i * (i - 1) / 2 + j - 1] << " ";
//             }
//             else
//                 cout << "0 ";
//         }
//         cout << endl;
//     }
// }

// int main()
// {
//     struct Matrices m;
//     cout << "Enter the dimensions" << endl;
//     cin >> m.n;
//     m.A = new int[m.n * (m.n + 1) / 2];
//     int x;
//     cout << "Enter all elements";
//     for (int i = 1; i <= m.n; i++)
//     {
//         for (int j = 1; j <= m.n; j++)
//         {
//             cin >> x;
//             Set(&m, i, j, x);
//         }
//     }
//     cout << endl;
//     Display(m);

//     delete[] m.A;
//     return 0;
// }