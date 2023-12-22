#include<stdio.h>
#include<stdlib.h>

struct node{
	int data;
	struct node *link;
}; 
int main()
{
	
	
	struct node *head=malloc(sizeof(struct node));
	head->data=34;
	head->link=NULL;
	printf("%d",head->data);
	
	struct node *current=malloc(sizeof(struct node));
	current->data=65;
	current->link=NULL;
	head->link=current;
	printf("\n%d",current->data);
	
	current=malloc(sizeof(struct node));
	current->data=3;
	current->link=NULL;
	head->link->link=current;
	printf("\n%d",current->data);
	
}
