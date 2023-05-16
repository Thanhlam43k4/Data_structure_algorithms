#include<bits/stdc++.h>
using namespace std;


struct node{
	int data;
	struct node *next;

};
typedef struct node node;


void push(node **head,int data){ //push_front node 
	node *newnode = new node;
	newnode->data = data;
	newnode->next = *head;
	if(*head == NULL){
		newnode->next = newnode;
	}else{
		node *temp = *head;
		while(temp->next != *head ){
			temp = temp->next;
		}
		temp->next = newnode;
	}
	*head = newnode;
}
void push_back(node **head,int data){
	node *newnode = new node;
	newnode->data = data;
	if(*head == NULL){
		*head = newnode;
		newnode->next = newnode;
	}else{	
		node *temp = *head;
		while(temp->next != *head){
			temp = temp->next;
		}
		temp->next = newnode;
		newnode->next = *head;
	}
}
void display(node *head)
{
	node *temp = head;
	cout <<"The linked List is displayed below:\n";
	if(head != NULL){
	do{
		cout << temp->data << " ";
		temp = temp->next;
	}
	while(temp != head);
	}
	cout << endl;
}	
int main(){
	node *head = NULL;
	push_back(&head,1);
	push_back(&head,4);
	push_back(&head,5);
	push_back(&head,6);
	push_back(&head,8);
	push_back(&head,10);
	display(head);


}
