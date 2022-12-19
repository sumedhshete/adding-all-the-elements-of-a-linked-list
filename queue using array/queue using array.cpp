// queue using array.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

class queue
{
public:
    int rear;
    int front;
    int size;
    int* q;
};

void create(queue* q)
{
    q->front = q->rear = -1;
    cout << "Enter the size of queue: ";
    cin >> q->size;
    q->q = new int[q->size];
}

void enqueue(queue* q, int x)
{
    if (q->rear == q->size - 1)
        cout << "queue is full.";
    else
    {
        q->rear++;
        q->q[q->rear] = x;
    }
}

int dequeue(queue* q)
{
    int x = -1;
    if (q->front == q->rear)
        cout << "queue is empty";
    else
    {
        q->front++;
        x = q->q[q->front];
    }
    return x;
}

void display(queue q)
{
    cout << "Elements in queue: ";
    int i;
    for (i = q.front + 1; i <= q.rear; i++)
    {
        cout << q.q[i]<<endl;
    }
}

int main()
{
    queue q;
    create(&q);

    enqueue(&q, 1);
    enqueue(&q, 2);
    enqueue(&q, 3);
    enqueue(&q, 4);
    enqueue(&q, 5);

    cout <<"the dequeued element is: " <<dequeue(&q) << endl;

    display(q);
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
