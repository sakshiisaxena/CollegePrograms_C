//WAp that will create dynamically and display array elements in reverse order
#include<stdio.h>
#include<conio.h>
int main()
{
	int *p,n,i;
	printf("how many numbers you wan to enter: ");
	scanf("%d",&n);
	p=(int*)malloc(n * sizeof(int));
	printf("\nenter %d numbers:\n",n);
	for(i=0;i<n;i++)
	{
		scanf("%d",p+i);
	}
	printf("array in reverse order:\n");
	for(i=n-1;i>=0;i--)
	{
		printf("%d",*(p+i));
	}
	return 0;
}
