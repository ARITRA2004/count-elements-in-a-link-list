//count teh nodes in a link list
#include <stdio.h>
#include <stdlib.h>

struct node
{
	int data;
	struct node *link;
};
void count(struct node *counter)
{
	int clock=0;
	while(counter!=NULL)
		{
			counter= counter->link;
			clock++;
		}
	printf ("%d",clock);
}
typedef struct node NODE;
int main ()
{
	NODE *head , *new_node , *new_node1;
	head = (NODE *)malloc(sizeof(NODE));
	head->data = 5;
	head->link = NULL;
	new_node = (NODE *)malloc(sizeof(NODE));
	new_node->data = 10;
	head->link = new_node;
	new_node->link = NULL;
	new_node1  = (NODE *)malloc(sizeof(NODE));
	new_node1->data = 8;
	new_node->link = new_node1;
	count(head);
return  0;
}
