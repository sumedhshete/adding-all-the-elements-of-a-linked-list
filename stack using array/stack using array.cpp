// stack using array.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

class stack
{
public:
    int size;
    int top;
    int* s;
};

void create(stack* st)
{
    cout << "Enter the size of the array: ";
    cin >> st->size;
    st->top = -1;
    st->s = new int[st->size];
}

void display(stack st)
{
    int i ;
    for (i = st.top; i >= 0; i--)
        cout << st.s[i]<<endl;
}

void push(stack* st, int x)
{
    if (st->top == st->size - 1)
    {
        cout << "Stack overflow.";
    }
    else
    {
        
        st->s[++st->top] = x;

    }
}

int pop(stack* st)
{
    int x = -1;
    if (st->top == -1)
    {
        cout << "empty";
    }
    else
        x = st->s[st->top--];
    return x;
}

int main()
{
    stack s;
    create(&s);

    push(&s, 10);
    push(&s, 20);
    push(&s, 30);

    display(s);

}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
