#include<iostream>
using namespace std;

class node
{
public:
	int data;
	node* next;
};

void display(node*p)
{
	while (p != NULL)
	{
		cout << "Elements are: " << p->data << endl;
		p = p->next;
	}
}

int main()
{
	node *first;
	node *second;
	node *third;

	first = new node;
	second = new node;
	third = new node;

	first->data = 1;
	first->next = second;

	second->data = 2;
	second->next = third;

	third->data = 3;
	third->next = NULL;

	display(first);
}