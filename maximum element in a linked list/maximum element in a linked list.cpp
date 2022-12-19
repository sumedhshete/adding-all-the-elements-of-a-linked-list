#include<iostream>
using namespace std;



class node
{
public:
    int data;
    node* next;
};

int count(node* p)
{
    int a = 0;
    while (p != NULL)
    {
        a++;
        p = p->next;
    }
    return a;
}

int add(node* p)
{
    int sum = 0;
    while (p != NULL)
    {
        sum = sum + p->data;
        p = p->next;

    }
    return sum;
}

int max(node* p)
{
    int x = 0;
    while (p != NULL)
    {
        if (p->data > x)
            x = p->data;
        p = p->next;
    }
    return x;
}

int main()
{
    node* first;
    node* second;
    node* third;

    first = new node;
    second = new node;
    third = new node;

    first->data = 11;
    first->next = second;

    second->data = 2;
    second->next = third;

    third->data = 4;
    third->next = NULL;

    cout << max(first);

    return 0;
}