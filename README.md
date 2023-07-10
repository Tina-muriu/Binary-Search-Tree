
# Binary Search Tree

This repository contains C++ code for a Binary Search Tree data structure. The code provides functionality for creating a binary search tree, performing traversals (preorder, inorder, and postorder), and searching for an item in the tree.

## Code Sample

```cpp
#include <iostream>
using namespace std;

struct node{
	int data;
	node *left, *right;
};

// Function to create a new node
node *create(node *root, int data){
	if (root==NULL){
		node *newnode = new node;
		newnode->data = data;
		newnode->left = NULL;
		newnode->right = NULL;
		return newnode;
	}
	else if (data < root->data){
		root->left = create(root->left, data);
	}
	else{
		root->right = create(root->right, data);
	}
	return root;
}

// Preorder traversal
void preorder(node *root){
	if (root == NULL){
		return;
	}
	else{
		cout << root->data << " ";
		preorder(root->left);
		preorder(root->right);
	}
}

// Inorder traversal
void inorder(node *root){
	if (root == NULL){
		return;
	}
	else{
		inorder(root->left);
		cout << root->data << " ";
		inorder(root->right);
	}
}

// Postorder traversal
void postorder(node *root){
	if (root == NULL){
		return;
	}
	else{
		postorder(root->left);
		postorder(root->right);
		cout << root->data << " ";
	}
}

// Search for an item in the tree
void search(node *root, int item){
	if (root == NULL){
		cout << "Item not found";
		return;
	}
	else if (item == root->data){
		cout << item << " found";
	}
	else if (item < root->data){
		search(root->left, item);
	}
	else{
		search(root->right, item);
	}
}

int main(){
	node *root = NULL;
	int n, item;
	cout << "How many values to insert in the tree: ";
	cin >> n;
	cout << "Enter the values: ";
	for (int i = 0; i < n; i++){
		cin >> item;
		root = create(root, item);
	}

	cout << "\nPreorder Traversal: ";
	preorder(root);
	cout << "\nInorder Traversal: ";
	inorder(root);
	cout << "\nPostorder Traversal: ";
	postorder(root);

	// Searching
	cout << "\nEnter item to search: ";
	cin >> item;
	search(root, item);

	return 0;
}
