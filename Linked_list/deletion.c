#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
} * head;

void begin_delet();
void end_delete();
void after_delete();
void display();

int main()
{
    int data, ch;
    while (1)
    {
        printf("enter 1 to delete at the beginning: \n");
        printf("enter 2 to delete at the end: \n");
        printf("enter 3 to delete after a given node: \n");
        printf("enter 4 to display: \n");
        printf("enter your choice");
        scanf("%d", &ch);
        switch (ch)
        {
        case 1:
            begin_delete();
            break;
        case 2:
            end_delete();
            break;
        case 3:
            after_delete();
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

void begin_delete()  
{  
    struct node *ptr;  
    if(head == NULL)  
    {  
        printf("\nList is empty\n");  
    }  
    else   
    {  
        ptr = head;  
        head = ptr->next;  
        free(ptr);  
        printf("\nNode deleted from the begining ...\n");  
    }  
}  
void last_delete()  
{  
    struct node *ptr,*ptr1;  
    if(head == NULL)  
    {  
        printf("\nlist is empty");  
    }  
    else if(head -> next == NULL)  
    {  
        head = NULL;  
        free(head);  
        printf("\nOnly node of the list deleted ...\n");  
    }  
          
    else  
    {  
        ptr = head;   
        while(ptr->next != NULL)  
        {  
            ptr1 = ptr;  
            ptr = ptr ->next;  
        }  
        ptr1->next = NULL;  
        free(ptr);  
        printf("\nDeleted Node from the last ...\n");  
    }     
}  
void random_delete()  
{  
    struct node *ptr,*ptr1;  
    int loc,i;    
    printf("\n Enter the location of the node after which you want to perform deletion \n");  
    scanf("%d",&loc);  
    ptr=head;  
    for(i=0;i<loc;i++)  
    {  
        ptr1 = ptr;       
        ptr = ptr->next;  
              
        if(ptr == NULL)  
        {  
            printf("\nCan't delete");  
            return;  
        }  
    }  
    ptr1 ->next = ptr ->next;  
    free(ptr);  
    printf("\nDeleted node %d ",loc+1);  
}  