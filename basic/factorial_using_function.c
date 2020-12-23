//wap to print factorial of a number using function//
#include<stdio.h>
void factorial(int num);
int main()
{
	int num;
	printf("enter a positive number to find factorial \n");
	scanf("%d",&num);
	factorial(num);
	return 0;
}
void factorial(int num)
{
	int count,fact=1;
	if(num==0)
	{
		printf("factorial of 0 is 1\n");
	}
	else
	{
		for(count=1;count<=num;count++)
		{
		fact=fact*count;
	    }
	    printf("\n factorial of %d is %d",num,fact);
	}
}
