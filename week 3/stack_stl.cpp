#include <iostream> 
#include <stack>

using namespace std;

int main() {
    
	stack<int> stack;
    stack.push(21);
    stack.push(22);
    stack.push(24);
    stack.push(25);
	
	int num = 19;
	stack.push(num);
	stack.push(80);
    stack.pop();
   
    while(!stack.empty()) {
        
		cout << stack.top() << "\n";
        stack.pop();
    }
	
	return 0;
}