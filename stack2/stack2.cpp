#include<iostream>
using namespace std;

class stack
{
public:
    int top;
    int size;
    int* a;
};

void create(stack* s)
{
    cout << "Enter the size of the array: ";
    cin >> s->size;
    s->top = -1;
    s->a = new int[s->size];
}

void push(stack* s, int x)
{
    if (s->top == s->size - 1)
        cout << "stack overflow";
    else 
    {
        s->top++;
        s->a[s->top] = x;
    }
}

void display(stack s)
{
    int i;
    for (i = s.top; i >= 0; i--)
        cout << s.a[i] << endl;
}

int main()
{
    stack s;
    create(&s);

    push(&s, 3);
    push(&s, 4);
    push(&s, 5);
    push(&s, 6);
    push(&s, 7);

    display(s);
}