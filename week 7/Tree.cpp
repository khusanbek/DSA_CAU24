#include<iostream>
using namespace std;

//structure to define a node in the binary tree
struct TreeNode {
	
    int value;
    struct TreeNode* left;
    struct TreeNode* right; 
	
    //constructor to initialize the node with a value
    TreeNode(int val) {
        value = val;
        left = NULL;
        right = NULL;
    }
};

//function to print the binary tree elements using in-order traversal
void printBinaryTree(struct TreeNode* root) {
	
    if (root == NULL) {
        return;
    }
    // Traverse the left subtree
    printBinaryTree(root->left);
    // Print the value of the present node
    cout << root->value << " ";  
    // Traverse the right subtree
    printBinaryTree(root->right);
}

int main() {
	
    // Create the root of the binary tree
    struct TreeNode* root = new TreeNode(1);
    
	// Create left and right child nodes
    root->left = new TreeNode(2);
    root->right = new TreeNode(3);
	// Create a left child for the root's left node
    root->left->left = new TreeNode(4);
    
	// Print the binary tree elements using in-order traversal
    printBinaryTree(root);
	
    return 0;
}