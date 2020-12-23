//QUEUE DYNAMIC IMPLIMENTATION
#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};
struct node *front, *rear;

void enqueue(int num)
{
    struct node *newnode;
    newnode = (struct node *)malloc(sizeof(struct node));
    newnode->data = num;
    if (front == NULL)
    {
        front = newnode;
        rear = newnode;
        front->next = NULL;
        rear->next = NULL;
    }
    else
    {
        rear->next = newnode;
        rear = newnode;
        rear->next = NULL;
    }
}

void dequeue()
{
    int a;
    struct node *temp;
    if (front == NULL)
    {
        printf("\nQueue underflow!");
        return;
    }
    a = front->data;
    printf("\nThe dequeue element is:%d ", a);
    temp = front;
    front = front->next;
    free(temp);
}

void display()
{
    struct node *temp;
    temp = front;
    if (front == NULL)
    {
        printf("\nQueue underflow!");
        return;
    }
    printf("\nThe elements in the queue are:");
    while (temp != NULL)
    {
        printf("%d->", temp->data);
        temp = temp->next;
    }
}
void main()
{
    front = rear = NULL;
    int ch, num;
    int i = 1;
    while (i == 1)
    {
        printf("\nMenu!!");
        printf("\n1)Enqueue \n2)Deque \n3)Display \n4)Exit");
        printf("\nEnter the choice:");
        scanf("%d", &ch);
        switch (ch)
        {
        case 1:
            printf("\nEnter the data:");
            scanf("%d", &num);
            enqueue(num);
            break;
        case 2:
            dequeue();
            display();
            break;
        case 3:
            display();
            break;
        case 4:
            exit(0);
        default:
            printf("\nInvalid choice!");
        }
    }
}

