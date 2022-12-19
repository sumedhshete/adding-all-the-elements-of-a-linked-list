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

int main()
{
    node* first;
    node* second;
    node* third;

    first = new node;
    second = new node;
    third = new node;

    first->data = 1;
    first->next = second;

    second->data = 2;
    second->next = third;

    third->data = 3;
    third->next = NULL;

    cout << add(first);

    return 0;
}