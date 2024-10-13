/* C++ program to implement basic stack 
operations */
#include <iostream> 
#include <string>

using namespace std; 

#define MAX 1000 

class Student {

	private:
		int id;
		string fullName;

	public:
		Student() {}
		Student(int idInput, string fullNameInput) {
			id = idInput;
			fullName = fullNameInput;
		}
		
		int getID() { return id; }
		void setID(int idInput) {id = idInput;}
		string getFullName() { return fullName; }
		void setFullName(string fullNameInput) 
			{ fullName = fullNameInput; }
		
		void printInfo()
		{ 
			cout << "\n--- Student Object ---\n"
				<< "ID: " << getID() << 
					", " << "full name: " << getFullName()
						<< "\n+++ Student Object +++\n\n"; 
		}
};

class Stack {
    int topIndex; 

public: 
    Student a[MAX]; // Maximum size of Stack 

    Stack() { topIndex = -1; } 
    bool push(Student x); 
    Student pop(); 
    Student peek(); 
    bool isEmpty(); 
}; 

bool Stack::push(Student x) 
{ 
    if (topIndex >= (MAX - 1)) { 
        cout << "Stack Overflow"; 
        return false; 
    } 
    else { 
        a[++topIndex] = x; 
        cout << "Student with ID: " << 
			x.getID() << " added to stack.\n"; 
        return true; 
    } 
} 

Student Stack::pop() 
{
	Student studentEmpty(-1, "No name");
	
    if (topIndex < 0) { 
        cout << "Stack Underflow"; 
        return studentEmpty; 
    } 
    else { 
        Student x = a[topIndex--]; 
        return x; 
    } 
}
 
Student Stack::peek() 
{ 
	Student studentEmpty(-1, "No name");
	
    if (topIndex < 0) { 
        cout << "Stack is Empty"; 
        return studentEmpty; 
    } 
    else { 
        Student x = a[topIndex]; 
        return x; 
    } 
} 

bool Stack::isEmpty() 
{ 
    return (topIndex < 0); 
} 

// Driver program to test above functions 
int main() 
{ 
	Stack s;
	
	Student student1(123, "Jack De Mann");	
	student1.printInfo();
	
	Student student2(456, "Ali Vali");	
	student2.printInfo();
	
	Student student3(789, "Hue John");	
	student3.printInfo();
	
	Student student4(445, "Dustin Hashman");	
	student4.printInfo();
	
	s.push(student1);
	s.push(student2);
	s.push(student3);
	s.push(student4);
	
	Student studentPopped = s.pop();
	
	cout << "Student with ID: " << 
			studentPopped.getID() << 
				" taken out from stack.\n"; 
	
	Student studentPeeked = s.peek();
	
	cout << "Student with ID: " << 
			studentPeeked.getID() << 
				" is top element in stack.\n"; 
	
    //print all elements in stack : 
    cout << "\n\nElements present in stack : \n";
	
    while(!s.isEmpty()) 
    {
		Student studentPeeked = s.peek();		
        // print top element in stack 
        studentPeeked.printInfo(); 
        // remove top element in stack 
        s.pop(); 
    }

    return 0; 
}