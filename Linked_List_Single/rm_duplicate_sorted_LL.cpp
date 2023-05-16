#include<bits/stdc++.h>

using namespace std;


struct node{			//Declare struct of node
	int data;
	struct node *next;


};
typedef struct node node;
node *makeNode(int data)	//Allocate memory for a node
{
	node *newnode = new node;
	newnode->data = data;
	newnode->next = NULL;
	return newnode;
}	
void display(node *head) //Display all elements of Linked List
{
	node *temp = head;
	while(temp != NULL){
		cout << temp->data << " ";
		temp = temp->next;
	}
}
void removeDuplicates(node *head) //Remove Duplicates in Linked List
{
	node *temp = head;
	node *next_next;
	while(temp->next != NULL){
		if(temp->data == temp->next->data){
			next_next = temp->next->next;
			free(temp->next);
			temp->next = next_next;

		}else{
			temp = temp->next;
		}
		


	}
}
//Driver code
int main()
{	
	node *head = makeNode(4);
	head->next = makeNode(4);
	head->next->next = makeNode(4);
	head->next->next->next = makeNode(5);
	head->next->next->next->next = makeNode(7);
	head->next->next->next->next->next = makeNode(8);
	removeDuplicates(head);
	display(head);

}


