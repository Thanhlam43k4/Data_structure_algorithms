#include<bits/stdc++.h>
using namespace std;

struct node{
	int data;
	struct node *left;
	struct node *right;

};
typedef struct node node;
node *makeNode(int data)
{
	node *newnode = new node;
	newnode->data = data;
	newnode->left = newnode->right = NULL;
	return newnode;
}
node *Insert(node *root,int data)   //Insert newnode in tree with ordered positions
{	
	node *newnode = makeNode(data);
	if(root == NULL){
		root = newnode;
	}else if(data <= root->data){
		root = Insert(root->left,data);
	}else{
		root = Insert(root->right,data); 
	}
	return root;
}

void in_order(node *root)
{
	if(root != NULL){
		in_order(root->left);
		cout << root->data << " ";
		in_order(root->right);
	}
	cout << endl;
}
int main(){
	node *root = NULL;
	root = Insert(root,50);
	root = Insert(root,20);
	root = Insert(root,30);
	root = Insert(root, 40);
    root = Insert(root, 70);
    root = insert(root, 60);
    root = insert(root, 80);
	in_order(root);
}

