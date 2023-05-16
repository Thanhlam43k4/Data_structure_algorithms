#include<bits/stdc++.h>
using namespace std;


struct node{
	int data;
	struct node *next;

};
typedef struct node node;


void push(node **head,int data)
{
	node  *newnode = new node;
	newnode->data = data;
	newnode->next = *head;
	*head = newnode;


}
bool detectLoop(node *head)
{
	unordered_set<node*> s;
	while(head != NULL){
		if(s.find(head) != s.end())
			return true;


			s.insert(head);
			head =head->next;

		
	}
		return false;
	


}
/* Driver program to test above function */

int main()
{
	node *head = NULL;
	push(&head,20);
	push(&head,4);
	push(&head,15);
	push(&head,10);
	head->next->next->next->next =head;
	if(detectLoop(head)){
		cout << "Loop Found" <<endl;

	}else{
			cout <<"No loop"<<endl;

	}
	return 0;
}	
