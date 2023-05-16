//Binary Search Tree - Implemention in C/C++
#include<bits/stdc++.h>
using namespace std;

struct BstNode{
	int data;
	BstNode *left ;
	BstNode *right;
	
};
BstNode *GetnewNode(int data)
{
	BstNode *newNode = new BstNode();
	newNode->data = data;
	newNode->left = newNode->right = NULL;
	return newNode;


}
BtsNode *Insert(BstNode *root,int data){
	if(root == NULL){
		root = GetnewNode(data);
		

	}else if(data <= root->left){
		root = Insert(root->left,data);
	

	}else{
		root = Insert(root->right,data);
	}
	return root;
}
bool Search(BstNode *root,int data){
	if(root == NULL) return false;
	else if(root->data == data) return true;
	else if(data <= root->data) return Search(root->left,data);
	else return Search(root->right,data);

int main()
{
	BstNode *root = NULL; //Pointer to root node
	root = Insert(root,15); root = Insert(root,10); root =Insert(root,20);
	root = Insert(root,25);	root = Insert(root,8); root = Insert(root,12);
	int number;
	cout << "enter the number:\n";
	cin >> number;
	if(Search(root,number) == true){
		cout << "FIND !" << endl;
	}else{
		cout << "Not FOUND!\n";
	}


}



