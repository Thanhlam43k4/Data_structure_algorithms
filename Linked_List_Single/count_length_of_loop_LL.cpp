#include<bits/stdc++.h>
using namespace std;
struct node{			//Struct of node in Linked List
	int data;
	struct node *next;
};

typedef struct node node;


node *makeNode(int data){   //allocate a newnode with data input
	node *newnode = new node;
	newnode->data = data;
	newnode->next = NULL;
	return newnode;
} 
int size_LL(node *head) //Find the length of a Linked List
{
	int cnt = 0;
	node *temp = head;
	while(temp != NULL){
		cnt++;
		temp =temp->next;
	}
	return cnt;
}
int countNodesinLoop(node *head)
{
	node *slow_h = head, *fast_h = head;
	while(slow_h && fast_h && fast_h->next){
		slow_h = slow_h->next;
		fast_h = fast_h->next->next;
		if(slow_h == fast_h){ //There is a loop when slow_h meet fast_h
			return size_LL(slow_h);
		}

	}
	/*Return 0 when not found a Loop in Linked List */

	return 0;

}
// Driver Code
int main()
{
    node *head = makeNode(1);
    head->next = makeNode(2);
    head->next->next = makeNode(3);
    head->next->next->next = makeNode(4);
    head->next->next->next->next = makeNode(5);

    /* Create a loop for testing */
    head->next->next->next->next->next = head->next;

    cout << countNodesinLoop(head) << endl;

    return 0;
}
