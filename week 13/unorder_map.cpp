// C++ program to use unordered_map as HashMap
#include <iostream>
#include <unordered_map>
using namespace std;

int main()
{
    // Create an unordered_map
    unordered_map<string, int> umap;

    // Insert key-value pairs into the unordered_map
    umap["Apple"] = 10;
    umap["Mango"] = 20;
    umap["Cherry"] = 30;

    // Print the key-value pairs
    for (auto it : umap)
        cout << it.first << " " << it.second << endl;

    return 0;
}