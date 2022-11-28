#include <stdio.h>
#include <stdlib.h>

typedef struct node{
	int val;
	struct node * next;
} node_t;


int pop(node_t *head){
	node_t *current=head;
	while(current->next->next!=NULL){
		current=current->next;
	}
	int retval = current->next->val;
	free(current->next);
	current->next=NULL;
	return retval;
}


void push(node_t *head,int n)
{
	node_t *current=head;
	while(current->next!=NULL){
		current=current->next;
	}
	current->next = (node_t *) malloc(sizeof(node_t));

	current->next->val=n;
}

void printList(node_t *head){
	node_t *current=head;
	while(current != NULL){
		printf("%d  ", current->val);
		current = current->next;
	}
}

void remove_by_value(node_t * head,int n){

	node_t *current=head;
	if(current->val==n)
	{
		pop(current);
	}
	while(current->next->next->val!=n){
		if(current->next == NULL){

			current=current->next;
		}
	}
}

	int main(){

		node_t *test=(node_t *) malloc(sizeof(node_t *));
		test->val = 1;

		test->next=(node_t *) malloc(sizeof(node_t *));
		test->next->val=2;

		test->next->next=(node_t *) malloc(sizeof(node_t *));
		test->next->next->val=3;

		test->next->next->next=(node_t *) malloc(sizeof(node_t *));
		test->next->next->next->val=4;

		test->next->next->next->next=NULL;

		printList(test);

		push(test,5);
		push(test,6);
		push(test,7);

		printf("\n");

		printList(test);

		printf("\n");

		int deletedVal =	pop(test);
		printf("%d \n",deletedVal);

		deletedVal = pop(test);

		printf("%d \n",deletedVal);

		printList(test);

		printf("\n");
	}
