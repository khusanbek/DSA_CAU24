// C++ program to show how to use iterator to
// traverse vector container https://www.geeksforgeeks.org/iterators-c-stl/
#include <iostream>
#include <vector>
using namespace std;

int main() {
	
	vector<int> arr = {1, 2, 3, 4, 5};

	// Defining an iterator pointing to
	// the beginning of the vector
	vector<int>::iterator first = arr.begin();

	// Defining an iterator pointing to the
	// end of the vector
	vector<int>::iterator last = arr.end();

	// Iterating the whole vector
	while(first != last) {
		
		cout << *first << " ";
		first++;
	}

	return 0;
}