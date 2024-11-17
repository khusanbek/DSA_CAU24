
#include<iostream>
using namespace std;

struct addr
{
	int houseno;
	string area;
	string city;
	string state;
};

struct emp
{
	int id;
	string name;
	addr address;
};

int main()
{
	emp e;

	cout << "Enter the ID: ";
	cin >> e.id;
	
	cout << "Enter the Name: ";
	cin >> e.name;
	
	cout << "Enter the House No.: ";
	cin >> e.address.houseno;
	
	cout << "Enter the Area: ";
	cin >> e.address.area;
	
	cout << "Enter the City: ";
	cin >> e.address.city;
	
	cout << "Enter the State: ";
	cin >> e.address.state;

	cout << "\n\nEmployee ID: "<<e.id;
	cout << "\nEmployee Name: "<<e.name;
	cout << "\nAddress: ";
	cout << e.address.houseno << ", " 
			<< e.address.area << ", " 
			<< e.address.city << ", " 
			<< e.address.state << endl;

	return 0;
}