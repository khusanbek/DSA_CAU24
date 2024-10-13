// C++ Program to Implement a Graph 
// Using Adjacency Matrix
#include <iostream>
#include <vector>
using namespace std;

class Graph {
	
    // Adjacency matrix to store graph edges
    vector<vector<int> > adj_matrix;

public:
    // Constructor to initialize the graph with 'n' vertices
    Graph(int n)
    {
        adj_matrix
            = vector<vector<int> >(n, vector<int>(n, 0));
    }

    // Function to add an edge between vertices 'u' and 'v'
    // of the graph
    void add_edge(int u, int v)
    {
        // Set edge from u to v
        adj_matrix[u][v] = 1;
        // Set edge from v to u (for undirected graph)
        adj_matrix[v][u] = 1;
    }

    // Function to print the adjacency matrix representation
    // of the graph
    void print()
    {
        // Get the number of vertices
        cout << "Adjacency Matrix for the Graph: " << endl;
        int n = adj_matrix.size();
		
        for (int i = 0; i < n; i++) {
			
            for (int j = 0; j < n; j++) {
				
                cout << adj_matrix[i][j] << " ";
            }
            cout << endl;
        }
    }
};

int main()
{
    // Number of vertices
    int n = 4;
    // Create a graph with 4 vertices
    Graph g(n);

    // Adding the specified edges in the graph
    g.add_edge(0, 1);
    g.add_edge(0, 2);
    g.add_edge(1, 3);
    g.add_edge(2, 3);

    // Print the adjacency matrix 
	// representation of the graph
    g.print();
	
    return 0;
}
