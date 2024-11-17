// C++ program to demonstrate the creation of descending
// order set container
// https://www.geeksforgeeks.org/set-in-cpp-stl/
#include <iostream>
#include <set>
using namespace std;

int main()
{
    set<int, greater<int> > s1;
    s1.insert(10);
    s1.insert(5);
    s1.insert(12);
    s1.insert(4);

    for (auto i : s1) {
        
		cout << i << ' ';
    }
	
    return 0;
}