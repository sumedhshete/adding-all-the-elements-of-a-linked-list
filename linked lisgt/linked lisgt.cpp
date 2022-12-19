//linked list

#include<iostream>
using namespace std;

struct node
{
	int data;
	struct node* next;

};

void display(struct node* p)
{
	while (p != NULL)
	{
		cout << p->data << endl;
		p = p->next;
	}
}

int main()
{
	struct node* first;
	struct node* second;
	struct node* third;

	first = new struct node;
	second = new struct node;
	third = new struct node;

	first->data = 1;
	first->next = second;

	second->data = 2;
	second->next = third;

	third->data = 3;
	third->next = NULL;

	display(first);

}