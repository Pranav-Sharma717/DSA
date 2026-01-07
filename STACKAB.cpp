#include <bits/stdc++.h>
using namespace std;

// Stack using linked list
// Stack using array is already present in stack.cpp
struct Stack
{
    int size;
    int top;
    char *s;
};

void push(Stack *st, int x)
{
    if (st->top == st->size - 1)
        cout << "Stack Overflow" << endl;
    else
    {
        st->top++;
        st->s[st->top] = x;
    }
}

int pop(Stack *st)
{
    if (st->top == -1)
    {
        cout << "Stack underflow" << endl;
    }
    else
    {
        int x = st->s[st->top];
        st->top--;
        return x;
    }
}

int peek(Stack st, int pos)
{
    int x;
    if (st.top - pos + 1 < 0)
    {
        printf("Invalid pos");
    }
    else
        x = st.s[st.top - pos + 1];
    return x;
}

int stackTop(Stack st)
{
    if (st.top == -1)
        return -1;
    else
        return st.s[st.top];
}

int isEmpty(Stack st)
{
    if (st.top == -1)
        return 1;
    else
        return 0;
}

int isFull(Stack st)
{
    if (st.top == st.size - 1)
        return 1;
    else
        return 0;
}

// int main()
// {
//     struct Stack st;
//     printf("enter the size of stack");
//     scanf("%d", &st.size);
//     st.s = new int[st.size];
//     st.top = -1;
//     for (int i = 0; i < st.size; i++)
//     {
//         cout << "Enter the value to be pushed";
//         int n;
//         cin >> n;
//         push(&st, n);
//     }
//     for (int i = 0; i <= st.top; i++)
//     {
//         cout << st.s[i] << " ";
//     }
//     cout << endl;

//     cout << "Popped: " << pop(&st) << endl;

//     cout << "Peek at position 1: " << peek(st, 1) << endl;

//     cout << "Stack Top: " << stackTop(st) << endl;

//     cout << "Is Empty: " << isEmpty(st) << endl;

//     cout << "Is Full: " << isFull(st) << endl;
// }
///////////////////////////////////////////////////////////

// Parentesis Matching(for every opening paranthesis, there must be a closing one)

int isBalance(char *exp)
{
    struct Stack st;
    st.size = strlen(exp);
    st.top = -1;
    st.s = new char[st.size];
    for (int i = 0; exp[i] != '\0'; i++)
    {
        if (exp[i] == '(' || exp[i] == '[' || exp[i] == '{')
            push(&st, exp[i]);
        else if (exp[i] == ')' || exp[i] == ']' || exp[i] == '}')
        {
            if (isEmpty(st))
                return false;
            pop(&st);
        }
    }
    return isEmpty(st) ? true : false;
}

int main()
{

    char exp[100];
    cout << "Enter an expression: ";
    cin >> exp;
    if (isBalance(exp))
        cout << "Balanced parentheses" << endl;
    else
        cout << "Unbalanced parentheses" << endl;
}

// Associativity and Unary operators
//  The order of precedence inside the precedence of operations like + and - for the post fix and prefix calculations.
