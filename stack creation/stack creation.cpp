// stack creation.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

struct stack
{
    int top;
    int size;
    int* S;
};

void create(struct stack* s)
{
    cout << "Enter the size of the stack: ";
    cin >> s->size;
    s->top = -1;
    s->S = new int[s->size];
}

void push(struct stack* s, int x)
{
    if (s->top == s->size - 1)
    {
        cout << "stack overflow.";
    }
    else
    {
        s->top++;
        s->S[s->top] = x;
    }
}

void display(struct stack s)
{
    int i;
    for (i = s.top; i >= 0; i -- )
        cout << s.S[i]<<endl;
}

int pop(struct stack* s)
{
    int x = -1;
    if (s->top == -1)
    {
        cout << "stack is empty";
    }
    else
    {
        x = s->S[s->top];
        s->top--;
    }
    return x;
}

int main()
{
    struct stack s;
    create(&s);

    push(&s, 3);
    push(&s, 4);
    push(&s, 5); push(&s, 6); push(&s, 7);

    display(s);

    return 0;
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
