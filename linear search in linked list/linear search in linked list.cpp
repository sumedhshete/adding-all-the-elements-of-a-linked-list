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

int search(node* p,int key)
{
    int a = 0;
    while (p != NULL)
    {
        a++;
        if (p->data == key)
        {
            return a;
        }
        

        p = p->next;

    }
    cout << "not found";
    return NULL;
}

int main()
{
    node* first;
    node* second;
    node* third;

    first = new node;
    second = new node;
    third = new node;

    first->data = 41;
    first->next = second;

    second->data = 22;
    second->next = third;

    third->data = 13;
    third->next = NULL;

    cout << "Enter key: ";
    int key;
    cin >> key;

    cout<<search(first, key);

    return 0;
}