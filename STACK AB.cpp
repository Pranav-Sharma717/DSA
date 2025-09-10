#include <bits/stdc++.h>
using namespace std;

struct Stack
{
    int size;
    int top;
    int *s;
};

int main()
{
    struct Stack st;
    printf("enter the size of stack");
    scanf("%d", &st.size);
    st.s = new int[st.size];
    st.top = -1;
}