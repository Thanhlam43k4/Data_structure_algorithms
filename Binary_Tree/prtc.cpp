#include<bits/stdc++.h>
using namespace std;
struct node{
	int data;
	struct node *left , *right;

};
typedef struct node node;
node *makeNode(int x)
{
	node *newnode = new node;
	newnode->data = x;
	newnode->left = newnode->right = NULL;
	return newnode;
}
node *Insert(node *root,int data)
{	
	node *newnode= makeNode(data);
	if(root == NULL){
		root = newnode;
	}else if(data <= root->data){
		root = Insert(root->left,data);
	}else{
		root = Insert(root->right,data);
	}
	return root;
}
void print_Inorder(node *root)
{
	if(root == NULL)
		return;
	print_Inorder(root->left);

	cout << root->data << " ";

	print_Inorder(root->right);
	
}
void print_Preorder(node *root)
{
	if(root == NULL)
	return;
	print_Preorder(root->left);
	print_Preorder(root->right);
}
void print_Postorder(node *root)
{
	if(root == NULL)
	return;
	print_Postorder(root->left);
	print_Postorder(root->right);
	cout << root->data << " ";
}
int main()
{
	node *root = makeNode(1);
	root->left= makeNode(2);
	root->right = makeNode(3);
	root->left->left = makeNode(4);
	root->left->right = makeNode(5);
	print_Inorder(root);
	cout << endl;
}
