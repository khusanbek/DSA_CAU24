// C++ Program to implement a queue using array
#include <iostream>
using namespace std;

// defining the max size of the queue
#define MAX_SIZE 100

// Implement the queue data structure
class Queue {
public:
    int front;
    int rear;
    int arr[MAX_SIZE];

    // initializing pointers in the constructor
    Queue(): front(-1), rear(-1) {}

    // Function to check if the queue is empty or not
    bool isEmpty() { return front == -1 || front > rear; }

    // Function to check if the queue is full or not
    bool isFull() { return rear == MAX_SIZE - 1; }

    // Function to get the front element of the queue
    int getFront()
    {
        if (isEmpty()) {
            cout << "Queue is empty" << endl;
            return -1;
        }
        return arr[front];
    }

    // Function to get the rear element of the queue
    int getRear()
    {
        if (isEmpty()) {
            cout << "Queue is empty" << endl;
            return -1;
        }
        return arr[rear];
    }

    // Function to enqueue elements from the queue
    void enqueue(int val)
    {
        // Check overflow condition
        if (isFull()) {
            cout << "Queue is full" << endl;
            return;
        }
        // if queue is empty, set front to 0
        if (isEmpty())
            front = 0;

        rear++;
        arr[rear] = val;
    }

    // Function to dequeue elements from the queue
    int dequeue()
    {
        // Check underflow condition
        if (isEmpty()) {
            cout << "Queue is empty" << endl;
            return -1;
        }
        int ans = arr[front];
        front++;

        // if queue becomes empty, reset both pointers
        if (isEmpty())
            front = rear = -1;

        return ans;
    }

    // Display function to print the queue
    void display()
    {
        if (isEmpty()) {
            cout << "Queue is empty" << endl;
            return;
        }
        cout << "Queue:  ";
        for (int i = front; i <= rear; i++) {
            cout << arr[i] << " ";
        }

        cout << endl;
    }
};

int main()
{
    // Created Queue of size 5
    Queue q;

    // Enqueueing elements
    q.enqueue(1);
    q.enqueue(2);
    q.enqueue(3);

    // Displaying status of the queue after enqueuing
    cout << "\nAfter Enqueueing:" << endl;

    cout << "Front element: " << q.getFront() << endl;
    cout << "Rear element: " << q.getRear() << endl;

    q.display();

    // Enqueueing more elements
    q.enqueue(4);
    q.enqueue(5);

    // Displaying the updated queue
    q.display();

    // Enqueueing one more element to demonstrate overflow
    // condition
    q.enqueue(6);

    // Dequeueing elements
    cout << "\nDequeueing elements:" << endl;
    cout << "Dequeued element: " << q.dequeue() << endl;
    cout << "Dequeued element: " << q.dequeue() << endl;

    // Displaying status of the queue after dequeueing
    cout << "\nAfter Dequeueing:" << endl;

    cout << "Front element: " << q.getFront() << endl;
    cout << "Rear element: " << q.getRear() << endl;

    q.display();

    return 0;
}