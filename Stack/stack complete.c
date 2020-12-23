//implementation of basic operations of stack
#include<stdio.h>
#include<conio.h>
#include<dos.h>
#define max 100
 int top=-1,s[max];
void push(int n)
{
    if(top==max-1)
    {
        printf("stack is over flown");
    }
    else
    {
        top=top+1;
        s[top]=n;
    }
}
void pop()
{
    if(top==-1)
    {
        printf("stack is underflown");
    }
    else
    {
        printf("\n poped element is %d",s[top]);
        top=top-1;
    }
}
void display()
{
    int i;
    if(top==-1)
        printf("stack is empty");
    else
    {
        for(i=top;i>=0;i--)
            printf("\t%d",s[i]);
    }
}
int main()
{
 	while(1)
 	{
		int i,n;
        printf("\n 1.Push");
        printf("\n 2.Pop");
        printf("\n 3.Display");
        printf("\n 4.Exit ");
        printf("\n\nEnter your choice :: ");
        scanf("%d",&i);
        switch(i)
        {
        case 1:
            printf("\n Enter any element to push : ");
            scanf("%d",&n);
            push(n);
            break;
        case 2:
            pop();
            break;
        case 3:
            display();
            break;
        case 4:
            default:
            break;
        }
    }
}















