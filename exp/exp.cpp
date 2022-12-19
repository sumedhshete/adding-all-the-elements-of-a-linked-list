#include<iostream>
using namespace std;

class queue
{
public: 
	int front;
	int rear;
	int* a;
	int size;
};

void create(queue* q)
{
	cout << "Enter the size of queue: ";
	cin >> q->size;
	q->front =q->rear = -1;
	q->a = new int[q->size];
}

void enqueue(queue* q, int x)
{
	if (q->rear == q->size - 1)
		cout << "queue is full.";
	else
		q->a[++q->rear] = x;
}

void dequeue(queue* q)
{
	int x = -1;
	if (q->rear == q->front)
		cout << "The queue is empty.";
	else {

		x = q->a[++q->front];
		cout << "Dequeue element is: " << x << endl;

	}
}

	void display(queue q)
	{
		int i;
			for (i = q.front; i <= q.rear; i++)
				cout << q.a[i] << endl;
	}


	int main()
	{
		queue q;
		create(&q);

		enqueue(&q, 10);
		enqueue(&q, 20);
		enqueue(&q, 30);
		enqueue(&q, 40);
		enqueue(&q, 50);

		dequeue(&q);

		display(q);

		return 0;
}