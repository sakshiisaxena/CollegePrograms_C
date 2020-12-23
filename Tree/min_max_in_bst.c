//MINIMUM AND MAXIMUM IN A BST
#include<stdio.h>
#include<stdlib.h>
 
struct node
{
        struct node *lchild;
        int info;
        struct node *rchild;
};
 
struct node *insert(struct node *ptr, int ikey);
struct node *Min(struct node *ptr);
struct node *Max(struct node *ptr);
void display(struct node *ptr,int level);
 
int main( )
{
        struct node *root=NULL,*ptr;
        int choice,k;
 
        while(1)
        {
                printf("\n");
                printf("1.Insert\n");
                printf("2.Display\n");
                printf("3.Find minimum and maximum\n");
                printf("4.Quit\n");
                printf("\nEnter your choice : ");
                scanf("%d",&choice);
 
                switch(choice)
                {
                case 1:
                        printf("\nEnter the key to be inserted : ");
                        scanf("%d",&k);
                        root = insert(root, k);
                        break;
 
        case 2:
            printf("\n");
            display(root,0);
            printf("\n");
            break;
 
                 case 3:
                        ptr = Min(root);
                        if(ptr!=NULL)
                                printf("\nMinimum key is %d\n", ptr->info );
                        ptr = Max(root);
                        if(ptr!=NULL)
                                printf("\nMaximum key is %d\n", ptr->info );
                        break;
 
                 case 4:
                        exit(1);
 
                 default:
                        printf("\nWrong choice\n");
                }
        }
 
        return 0;
 
}
struct node *insert(struct node *ptr, int ikey )
{
        if(ptr==NULL)
        {
                ptr = (struct node *) malloc(sizeof(struct node));
                ptr->info = ikey;
                ptr->lchild = NULL;
                ptr->rchild = NULL;
        }
        else if(ikey < ptr->info) 
                ptr->lchild = insert(ptr->lchild, ikey);
        else if(ikey > ptr->info) 
                ptr->rchild = insert(ptr->rchild, ikey);
        else
                printf("\nDuplicate key\n");
        return ptr;
}
 
 
struct node *Min(struct node *ptr)
{
        if(ptr==NULL)
                return NULL;
        else if(ptr->lchild==NULL)
        return ptr;
        else
                return Min(ptr->lchild);
}
 
struct node *Max(struct node *ptr)
{
        if(ptr==NULL)
                return NULL;
        else if(ptr->rchild==NULL)
        return ptr;
        else
                return Max(ptr->rchild);
}
 
void display(struct node *ptr,int level)
{
        int i;
        if(ptr == NULL )
                return;
        else
    {
                display(ptr->rchild, level+1);
                printf("\n");
                for (i=0; i<level; i++)
                        printf("    ");
                printf("%d", ptr->info);
                display(ptr->lchild, level+1);
        }
}
