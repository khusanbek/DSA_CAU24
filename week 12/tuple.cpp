// https://www.luisllamas.es/en/cpp-what-are-tuples/

#include <iostream>
#include <tuple>

using namespace std;

int main() {
	
    tuple<int, string, double> simpleTuple = make_tuple(1, "Hello", 3.14);

    // Accessing the elements
    int number = get<0>(simpleTuple);
    string text = get<1>(simpleTuple);
    double floatNumber = get<2>(simpleTuple);

    cout << "Number: " << number << endl; // Prints "Number: 1"
    cout << "Text: " << text << endl;       // Prints "Text: Hello"
    cout << "Float number: " << floatNumber << endl;   // Prints "Float number: 3.14"

    return 0;
}