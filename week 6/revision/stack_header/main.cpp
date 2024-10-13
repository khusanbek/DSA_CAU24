/* C++ program to implement basic stack 
operations */
#include <iostream> 
#include "stack.h"
using namespace std; 

// Driver program to test above functions 
int main() 
{ 
    class Stack s; 
    s.push(7); 
    s.push(15); 
    s.push(40); 
    s.push(21); 
    s.push(70); 
    cout << s.pop() << " Popped from stack\n"; 
    
    //print top element of stack after popping 
    cout << "Top element is : " << s.peek() << endl; 
    
    //print all elements in stack : 
    cout <<"Elements present in stack : "; 
    while(!s.isEmpty()) 
    { 
        // print top element in stack 
        cout << s.peek() <<" "; 
        // remove top element in stack 
        s.pop(); 
    } 

    return 0; 
}