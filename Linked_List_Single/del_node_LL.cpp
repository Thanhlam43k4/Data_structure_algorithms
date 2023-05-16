#include<bits/stdc++.h>
#include<iostream>

using namespace std;

struct node{				//Declear a struct of node in Linked List
	int data;
	struct node *next;
};
typedef struct node node;


node *makeNode(int x)      //Function to allocate data for a newnode
{
	node *newnode = new node;
	newnode->data = x;
	newnode->next = NULL;
	return newnode;
}
void display(node *head)  //Display all elements of Linked List
{
	node *temp = head;
	cout <<"Linked List you want below:\n";
	while(temp != NULL){
		cout << temp->data << " ";
		temp = temp->next;
	}
	cout << endl;

}
int size(node *head)	//Return size of Linked List
{
	int cnt = 0;
	node *temp = head;
	while(temp != NULL){
		cnt++;
		temp = temp->next;
	}

	return cnt;
}
void pop_front(node **head)	//Erase a first element of Linked List
{	
	node *dele = *head;
	*head = dele->next;
	free(dele);

}
void earse(node **head,int pos)	//Erase a element with a given position 
{
	if(pos == 0){
		pop_front(head);
		
	}if(pos >= size(*head)){
		cout << "Error pos please run program again"<<endl;	
	}else{
		node *temp = *head;
		for(int i = 0; i < pos - 1;i++){
			temp = temp->next;
		}
		node *del = temp->next;
		temp->next = del->next;
		free(del);
	
	}
}
//Driver code
int main()
{
	node *head = makeNode(3);
	head->next = makeNode(5);
	head->next->next = makeNode(7);
	head->next->next->next = makeNode(8);
	head->next->next->next->next = makeNode(9);
	int pos;
	cout <<"A pos u want to del:";
	cin >> pos;
	earse(&head,pos);
	display(head);

}
