#include <stdio.h>
#include <stdlib.h>

struct node
{
	int data;
	struct node *next;
};

void traversal(struct node *ptr)
{
	while (ptr != NULL)
	{
		printf("elements are = %d\n", ptr->data);
		ptr = ptr->next;
	}
}

int main()
{
	struct node *head;
	struct node *second;
	struct node *third;
	struct node *fourth;

	head = (struct node *)malloc(sizeof(struct node));
	second = (struct node *)malloc(sizeof(struct node));
	third = (struct node *)malloc(sizeof(struct node));
	fourth = (struct node *)malloc(sizeof(struct node));

	head->data = 10;
	head->next = second;

	second->data = 20;
	second->next = third;

	third->data = 30;
	third->next = fourth;

	fourth->data = 40;
	fourth->next = NULL;

	traversal(head);

	return 0;
}
