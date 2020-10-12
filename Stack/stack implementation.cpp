#include<stdio.h>
#include<conio.h>
#include<dos.h>
#define max 10
 int top1, top2, a[max];
bool push()
{
	int ch,value;
	printf("enter number to push in stack: ");
	scanf("%d", &value);
	printf("enter 1 for FORWARD stack \nenter 2 for BACKWARD stack: ");
	scanf("%d", &ch);
 	 if(top1==top2-1)
	  return false;
	  if(ch==1)
	  a[++top1]=value;
	  else
	  a[--top2]=value;
}
int pop()
{
	int ch;
	printf("enter 1 to pop from FORWARD stack \nenter 2 to pop from BACKWARD stack: ");
	scanf("%d",&ch);
	if(ch==1)
	{
		if(top1==-1)
		return -1;
		else
		return a[top1--];
	}
	else 
	{
		if(top2==100)
		return -1;
		else
		return a[top2++];
	}
}
void display()
{
	
    int i;
    if (top1 == -1)
    {
        printf("stack 1 is empty \n");
    }
    else
    {
        printf("elements of Stack 1 are : \n");
        for (i = 0; i <= top2; i++)
        {
            printf("%d\n", a[i]);
        }
    return ;
	}
}
 
 int main()
{
    int ch;
    top1 = -1, top2 = max;
    while(1)
    {
        printf("1:push\n 2:pop\n 3:display\n 4:exit\n choice:");
        scanf("%d", &ch);
        switch (ch)
        {
        case 1:push();
            break;
        case 2:pop();
            break;
        case 3:display();
            break;
        default:printf("wrong choice \n");
            break;
        }
    } 
}

