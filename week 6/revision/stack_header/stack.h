
#define MAX 1000 

class Stack { 
    int top; 

public: 
    int a[MAX]; // Maximum size of Stack 

    Stack() { top = -1; } 
    bool push(int x); 
    int pop(); 
    int peek(); 
    bool isEmpty(); 
}; 