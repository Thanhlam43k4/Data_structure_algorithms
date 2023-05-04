#include<iostream>
#include<bits/stdc++.h>
//Programm To merge two sorted Linked Lists
/*
	This is the program after commit to add code



*/
using namespace std;

struct node{   //Initialize struct node of Linked lists
	int data;
	struct node *next;
};

typedef struct node node;


node *makeNode(int x){			//This functions are used to make a newnode in LL
	node *newnode = new node;
	newnode->data = x;
	newnode->next = NULL;
	return newnode;

}
void duyet(node *head){			/*This functions are used to display all elements of LL
								 in the screen								*/
	node *temp = head;
	cout <<"Linked List Below:\n";

	while(temp != NULL){
		cout << temp->data << " ";
		temp =temp->next;
	
	}
	cout << endl;
}
int  size_Linkedlist(node *head){	/*Return the size of Linked List */
	int cnt = 0;
	node *temp = head;
	while(temp != NULL){
		cnt++;
		temp = temp->next;
	}
	return cnt;
}
void push_back(node **head,int x){ /*This function is add an elements to the end of LL*													*/
	node *newnode = makeNode(x);
	
	if(*head == NULL){
		*head = newnode;
		return ;
	}else{
		node *temp = *head;
		while(temp->next != NULL){
			temp = temp->next;
		}
		temp->next = newnode;
	}
}
node *merge_two_sorted_LL(node *head1,node *head2) /* This function is merge two sorted Linked List and return a head node of new Linked List */
{
	node *res= new node;
	node *temp = res;
	vector<int> v;
	while(head1 != NULL){
		v.push_back(head1->data);
		head1= head1->next;

	}
	while(head2 != NULL){
		v.push_back(head2->data);
		head2 = head2->next;
	}
	sort(v.begin(),v.end());
	for(int i = 0;i < v.size();i++){
		res->next = makeNode(v[i]);
		res= res->next;

	}
	
	return temp;
}
	

int main()
{
	node *head = NULL;

	push_back(&head,2);
	push_back(&head,4);
	push_back(&head,7);
	push_back(&head,9);
	node *head2 = NULL;
	push_back(&head2,3);
	push_back(&head2,6);
	push_back(&head2,8);
	push_back(&head2,10);
	node *res = merge_two_sorted_LL(head,head2);

	duyet(res);

}
