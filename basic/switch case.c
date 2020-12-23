#include<stdio.h>
#include<conio.h>
int add (int, int);
int sub (int, int);
int mul (int, int);
int divi (int, int);
int main()
{
 int i,x,y,c;
 printf("Enter two numbers ");
 scanf ("%d %d",&x,&y);
 printf("1. addition\n");
 printf("2. subtraction\n");
 printf("3. multiplication\n");
 printf("4. division\n");
 printf("5. exit\n\n");
 printf("enter choice ");
 scanf ("%d",&i);
 switch(i)
 {
  case 1:
   c=add(x , y);
   break;
  case 2:
   c=sub(x , y);
   break;
  case 3:
   c=mul(x , y);
   break;
  case 4:
   c=divi(x,y);
   break;
  default :
   printf("Invalid choice");
 }
}
int add(int x, int y)
{
 int c;
 c = x+y;
 printf("Ans = %d\n",c) ;
}
int sub(int x, int y)
{
 int c;
 c = x-y;
 printf("Ans = %d\n",c);
}
int mul(int x, int y)
{
 int c;
 c = x*y;
 printf("Ans = %d\n",c);
}
int divi(int x, int y)
{
 int c;
 c = x/y;
 printf("Ans = %d\n",c);
}
