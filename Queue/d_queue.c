//-----------------------------------------------dequeue-----------------------------------//
#include<stdio.h>
# define MAX 10
int dequeue_arr[MAX];
int front = -1;
int rear = -1;

void insert_front(int value)
{
	if((front==0 && rear==MAX-1) || (front==rear+1))
	printf("overflow");
	else if(front==-1)
	{
		front=0;
		rear=0;
	}
	else if(front==0)
	front=MAX-1;
	else
	front=front-1;
	dequeue_arr[front]=value;
}

void insert_rear(int value)
{
    if((front==0 && rear==MAX-1) || (front==rear+1))
	printf("overflow");
	else if(front==-1)
	{
		front=0;
		rear=0;
	}
	else if(rear==MAX-1)
	rear=0;
	else
	rear=rear+1;
	dequeue_arr[rear]=value;
}

int delete_front()
{
	int value;
	if(front==-1)
	printf("underflown");
	value=dequeue_arr[front];
	if(front==rear)
	{
		front=-1;
		rear=-1;
	}
	else if(front==MAX-1)
	front=0;
	else
	front=front+1;
}

int delete_rear()
{
	int value;
	if(front==-1)
	printf("underflown");
	value=dequeue_arr[front];
	if(front==rear)
	{
        front=-1;
		rear=-1;
	}
	else if(rear==0)
	rear=MAX-1;
	else
	rear=rear-1;
}

void display()
{
	int i;
	if(front==-1)
	printf("underflown");
	printf("elements are = ");
	if(front<=rear)
	{
		while(front<=rear)
		{
		printf("%d", dequeue_arr[front]);
		front++;
		}
	}
    else
    {
        while(front<=MAX-1)
 		{
	        printf("%d",dequeue_arr[front]);
            front++;
	    }
	    front=0;
	    while(front<=rear)
        {
	        printf("%d\t",dequeue_arr[front]);
         	front++;
        }
    }
     printf("\n");
}

int main()
{
	int choice,value;
	while(1)
	{
		printf("1.insert from front end \n");
		printf("2.insert from rear end \n");
		printf("3.delete from front end \n");
		printf("4.delete from front end \n");
		printf("5.display \n");
		printf("enter your choice :");
		scanf("%d",&choice);
		switch(choice)
		{
            case 1 :
				printf("Input the element for insertion in queue \n : ");
				scanf("%d", &value);
				insert_front(value);
				break;
			case 2 :
				printf("Input the element for insertion in queue \n : ");
				scanf("%d", &value);
				insert_rear(value);
				break;
			case 3:
				 delete_front();
				 break;
			case 4:
				 delete_rear();
				 break;
			case 5:
				 display();
				 break;
			default:
				printf("Wrong choice \n");
		}
	}
}
			
			
			












