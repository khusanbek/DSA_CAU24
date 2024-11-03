// C++ program to Implement doubly linked list

#include <iostream>
using namespace std;

// Define a class named Node to represent a node in the
// doubly linked list.
class Node {

public:
    // Data part of the node.
    int data;
    // Pointer to the next node.
    Node* next;
    // Pointer to the previous node.
    Node* prev;

    // Constructor to initialize the node with given data.
    Node(int data)
    {
        this->data = data;
        this->next = nullptr;
        this->prev = nullptr;
    }
};

// Function to insert a node at the beginning of the doubly
// linked list.
void insertAtBeginning(Node*& head, int data)
{
    // Create a new node with the given data.
    Node* newNode = new Node(data);

    // Check if the doubly linked list is empty.
    if (head == nullptr) {
        head = newNode;
        return;
    }

    // Update the next and previous pointers to insert the
    // new node at the beginning.
    newNode->next = head;
    head->prev = newNode;
    head = newNode;
}

// Function to insert a node at the end of the doubly linked
// list.
void insertAtEnd(Node*& head, int data)
{
    // Create a new node with the given data.
    Node* newNode = new Node(data);

    // Check if the doubly linked list is empty.
    if (head == nullptr) {
        head = newNode;
        return;
    }

    // Traverse to the last node of the list.
    Node* temp = head;
    while (temp->next != nullptr) {
        temp = temp->next;
    }

    // Update the next and previous pointers to insert the
    // new node at the end.
    temp->next = newNode;
    newNode->prev = temp;
}

// Function to insert a node at a specified position in the
// doubly linked list.
void insertAtPosition(Node*& head, int data, int position)
{
    if (position < 1) {
        cout << "Position should be >= 1." << endl;
        return;
    }

    // If inserting at the head position.
    if (position == 1) {
        insertAtBeginning(head, data);
        return;
    }

    // Create a new node with the given data.
    Node* newNode = new Node(data);
    Node* temp = head;

    // Traverse to the node before the specified position.
    for (int i = 1; temp != nullptr && i < position - 1;
         i++) {
        temp = temp->next;
    }

    // Check if the position is greater than the number of
    // nodes.
    if (temp == nullptr) {
        cout << "Position greater than the number of nodes."
             << endl;
        return;
    }

    // Update the next and previous pointers to insert the
    // new node at the specified position.
    newNode->next = temp->next;
    newNode->prev = temp;
    if (temp->next != nullptr) {
        temp->next->prev = newNode;
    }
    temp->next = newNode;
}

// Function to delete a node from the beginning of the
// doubly linked list.
void deleteAtBeginning(Node*& head)
{
    // Check if the doubly linked list is empty.
    if (head == nullptr) {
        cout << "The list is already empty." << endl;
        return;
    }

    // Update the head pointer and delete the first node.
    Node* temp = head;
    head = head->next;
    if (head != nullptr) {
        head->prev = nullptr;
    }
    delete temp;
}

// Function to delete a node from the end of the doubly
// linked list.
void deleteAtEnd(Node*& head)
{
    // Check if the doubly linked list is empty.
    if (head == nullptr) {
        cout << "The list is already empty." << endl;
        return;
    }

    Node* temp = head;
    // If there is only one node in the list.
    if (temp->next == nullptr) {
        head = nullptr;
        delete temp;
        return;
    }

    // Traverse to the last node of the list.
    while (temp->next != nullptr) {
        temp = temp->next;
    }

    // Update the previous pointer of the second last node
    // and delete the last node.
    temp->prev->next = nullptr;
    delete temp;
}

// Function to delete a node from a specified position in
// the doubly linked list.
void deleteAtPosition(Node*& head, int position)
{
    // Check if the doubly linked list is empty.
    if (head == nullptr) {
        cout << "The list is already empty." << endl;
        return;
    }

    // If deleting the head node.
    if (position == 1) {
        deleteAtBeginning(head);
        return;
    }

    Node* temp = head;
    // Traverse to the node at the specified position.
    for (int i = 1; temp != nullptr && i < position; i++) {
        temp = temp->next;
    }

    // Check if the position is greater than the number of
    // nodes.
    if (temp == nullptr) {
        cout << "Position is greater than the number of "
                "nodes."
             << endl;
        return;
    }

    // Update the next and previous pointers and delete the
    // node at the specified position.
    if (temp->next != nullptr) {
        temp->next->prev = temp->prev;
    }
    if (temp->prev != nullptr) {
        temp->prev->next = temp->next;
    }
    delete temp;
}

// Function to print the doubly linked list in forward
// direction.
void printListForward(Node* head)
{
    Node* temp = head;
    cout << "Forward List: ";
    while (temp != nullptr) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

// Function to print the doubly linked list in reverse
// direction.
void printListReverse(Node* head)
{
    Node* temp = head;
    if (temp == nullptr) {
        cout << "The list is empty." << endl;
        return;
    }

    // Move to the end of the list.
    while (temp->next != nullptr) {
        temp = temp->next;
    }

    // Traverse backwards.
    cout << "Reverse List: ";
    while (temp != nullptr) {
        cout << temp->data << " ";
        temp = temp->prev;
    }
    cout << endl;
}

int main()
{
    Node* head = nullptr;

    // Demonstrating various operations on the doubly linked
    // list.
    // Insertion at End
    insertAtEnd(head, 10);
    insertAtEnd(head, 20);
    // Insertion at beginning
    insertAtBeginning(head, 5);
    // Insertion at specific position
    insertAtPosition(head, 15, 2);

    // print the list
    cout << "After Insertions:" << endl;
    printListForward(head);
    printListReverse(head);

    // deletion from beginning
    deleteAtBeginning(head);
    // deletion from end
    deleteAtEnd(head);
    // deletion from specific position
    deleteAtPosition(head, 2);

    cout << "After Deletions:" << endl;
    printListForward(head);

    return 0;
}
