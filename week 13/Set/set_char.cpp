// C++ Program to Demonstrate
// the basic working of STL
// https://www.geeksforgeeks.org/set-in-cpp-stl/
#include <iostream>
#include <set>
using namespace std;

int main()
{
    set<char> a;
    
	a.insert('G');
    a.insert('F');
    a.insert('G');
	
    for (auto &str : a) {
        
		cout << str << ' ';
    }
    cout << '\n';
	
    return 0;
}