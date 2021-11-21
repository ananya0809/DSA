#include<stdio.h>
struct Node
{
	int data;
	struct Node *next;
};
struct Node *head = NULL;
void insert(int a)
{
	struct Node *newNode = (struct Node*)malloc(sizeof(struct Node));
	newNode -> data = a;
	newNode -> next = NULL;
	
	if(head == NULL)
	{
		head = newNode;
		return;
	}
	struct Node *temp = head;
	while(temp->next != NULL)
	{
		temp = temp->next;
	}
	temp->next = newNode;
}

void printLinkedlist(){
	struct Node *temp = head;
	while(temp!=NULL){
		printf("%d,",temp->data);
		temp=temp->next;
	}
}
int main()
{
	int i;
	printf("enter 5 values to insert");
	for(i=0;i<5;i++)
	{
		int a;
		scanf("%d",&a);
		insert(a);
	}
	printLinkedlist();
	
	
	
}
