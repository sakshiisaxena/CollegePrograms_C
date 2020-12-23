#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
} * head;

void begin_insert();
void end_insert();
void after_insert();
void display();

int main()
{
    int data, ch;
    while (1)
    {
        printf("enter 1 to insert at the beginning: \n");
        printf("enter 2 to insert at the end: \n");
        printf("enter 3 to insert after a given node: \n");
        printf("enter 4 to display: \n");
        printf("enter your choice");
        scanf("%d", &ch);
        switch (ch)
        {
        case 1:
            begin_insert();
            break;
        case 2:
            end_insert();
            break;
        case 3:
            after_insert();
            break;
        case 4:
            display();
            break;
        default:
            printf("invalid choice");
            break;
        }
    }
}

void begin_insert()
{
    int data;
    struct node *newnode;
    newnode = (struct node *)malloc(sizeof(struct node));
    if (newnode == NULL)
        printf("unable to allocate memory");
    else
    {
        printf("enter data");
        scanf("%d", &data);
        newnode->data = data;
        newnode->next = head;
        head = newnode;
        printf("node inserted \n");
    }
}

void end_insert()
{
    int data;
    struct node *newnode, *temp;
    newnode = (struct node *)malloc(sizeof(struct node));
    if (newnode == NULL)
        printf("unable to allocate memory");
    else
    {
        printf("enter data");
        scanf("%d", &data);
        newnode->data = data;
        if (head == NULL)
        {
            newnode->next = NULL;
            head = newnode;
            printf("node inserted");
        }
        else
        {
            temp = head;
            while (temp->next != NULL)
            {
                temp = temp->next;
            }
            temp->next = newnode;
            newnode = NULL;
            printf("\nNode inserted");
        }
    }
}

void after_insert()
{
    int i, pos, data;
    struct node *newnode, *temp;
    newnode = (struct node *)malloc(sizeof(struct node));
    if (newnode == NULL)
    {
        printf("\nunable to allocate memory");
    }
    else
    {
        printf("\nEnter data");
        scanf("%d", &data);
        newnode->data = data;
        printf("\nEnter the location after which you want to insert ");
        scanf("\n%d", &pos);
        temp = head;
        for (i = 0; i < pos; i++)
        {
            temp = temp->next;
            if (temp == NULL)
            {
                printf("\ncan't insert\n");
                return;
            }
        }
        newnode->next = temp->next;
        temp->next = newnode;
        printf("\nNode inserted");
    }
}

void display()
{
    struct node *temp;
    if (head == NULL)
        printf("list is empty");
    else
    {
        temp = head;
        while (temp != NULL)
        {
            printf("%d ", temp->data);
            temp = temp->next;
        }
        printf("\n");
    }
}
