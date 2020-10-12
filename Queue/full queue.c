#include <stdio.h>
#include<stdlib.h>
#define MAX 50
void insert();
void delete();
void display();
int a[MAX];
int r = - 1, f = - 1;
void insert()
{
int val;
if(r == MAX - 1)
printf("Queue Overflow n");
else
{
if(f== - 1)
front = 0;
printf("Inset the element in queue : ");
scanf("%d", &val);
r = r + 1;
a[r] = val;
}
}


void delete()
{
if(f == - 1 || f > r)
{
printf("Queue Underflow n");
return;
}
else
{
printf("Element deleted from queue is : %dn", a[f]);
f = f + 1;
}
}


void display()
{
int i;
if(f == - 1)
printf("Queue is empty n");
else
{
printf("Queue is : n");
for(i = f; i <= r; i++)
printf("%d ", a[i]);
printf("n");
}
}
int main()
{
int choice;
while (1)
{
printf("1.Insert element to queue n");
printf("2.Delete element from queue n");
printf("3.Display all elements of queue n");
printf("4.Quit n");
printf("Enter your choice : ");
scanf("%d", &ch);
switch(ch)
{
case 1:
insert();
break;
case 2:
delete();
break;
case 3:
display();
break;
default:
printf("Wrong choice");
}
}
}
