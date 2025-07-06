#include <iostream>
using namespace std;
#include <stdlib.h>
#define max 50

template <class T>
class stack
{
private:
    int top;
    T stk[max];

public:
    stack();
    void push();
    void pop();
    void display();
};

// Constructor
template <class T>
stack<T>::stack()
{
    top = -1;
}

// Function to push an item into stack
template <class T>
void stack<T>::push()
{
    if (top == max - 1)
        cout << "Stack Overflow...\n";
    else
    {
        T item;
        cout << "Enter an item to be pushed: ";
        cin >> item;
        top++;
        stk[top] = item;
        cout << "Pushed Successfully...\n";
    }
}

// Function to pop an item from stack
template <class T>
void stack<T>::pop()
{
    if (top == -1)
        cout << "Stack is Underflow\n";
    else
    {
        T item = stk[top];
        top--;
        cout << item << " is popped Successfully...\n";
    }
}

// Function to display items in stack
template <class T>
void stack<T>::display()
{
    if (top == -1)
        cout << "Stack Underflow\n";
    else
    {
        for (int i = top; i > -1; i--)
        {
            cout << "|" << stk[i] << "|\n";
            cout << " ---\n";
        }
    }
}

int main()
{
    int choice;
    stack<int> st;
    while (1)
    {
        cout << "\n\n**Menu for Stack operations\n\n";
        cout << "1. PUSH\n2. POP\n3. DISPLAY\n4. EXIT\n";
        cout << "Enter Choice: ";
        cin >> choice;
        switch (choice)
        {
        case 1:
            st.push();
            break;
        case 2:
            st.pop();
            break;
        case 3:
            cout << "Elements in the Stack are ... \n";
            st.display();
            break;
        case 4:
            exit(0);
        default:
            cout << "Invalid choice...Try again...\n";
        }
    }
}