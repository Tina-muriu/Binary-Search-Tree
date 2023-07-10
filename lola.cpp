#include <iostream>
using namespace std;
struct node{
	int data;
	node *left, *right;
	};
node *create (node *root, int data){
	if (root==NULL){
	node *newnode=new node;
		newnode->data=NULL;
		newnode->left=NULL;
		newnode->right=NULL;
		return newnode;
	}
	else if(item<root->data){
	root->left=create(root->left,item);
	}
	else{
		root->right=create(root->right,item);
		
	}
	return root;
}
//traversals
void preeorder(node *root){
	if (root==NULL){
		return;
	}
	else{
		cout<<root->data<<" ";
		preorder(root->left);
		preorder(root->right);
	}
}
void inorder(node*root){
	if(rootr==NULL){
		return;
	}
	else{
		postorder(root->left);
		postorder(root->right);
		cout<<root->data<<"";
		
	}
}void search(node *root, int item){
	if(item==root->data){
		cout<<item<<"found";
		
	}
	else if(item<root->data){
		search(root->left,item);
		
	}
	else{
		search(root->right,item);
	}
}
int main(){
	node *root=NULL;
	int i,n;
	int item;
	cout<<"how many values to insert in the tree";
	cin>>n;
	cout<<"enter the values"
	for(i=10; i<n;i++){

	cin>>item;
	root=create(root,item);
}
    cout<<"\nPreorder Transversal:";
    preorder (root);
    cout<<"\nInorder Transversal:";
    inorder(root);
    cout<<"\nPostorder Transversal";
    postorder(root);
    //searching
    cout<<"Enter item to search ";
    cin>>item;
    search(root,item);
}
