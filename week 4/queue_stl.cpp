#include <iostream>
#include <queue>

using namespace std;

int main()
{
	queue<int> myQueue;
	myQueue.push(10);
	myQueue.push(20);
	myQueue.push(30);

	cout << "Queue top element: " << myQueue.front();
	
	return 0;
}
