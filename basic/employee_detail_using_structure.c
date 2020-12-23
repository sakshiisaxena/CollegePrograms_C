//WAP read employee details and display them.
//Also calculate total salary and average salary
#include <stdio.h>
#include<string.h>
 
struct employee{
    char    name[30];
    int     empId;
    float   salary;
};
 
int main()
{
    struct employee emp[100];
    int i,n;
    printf("enter no of employees\n");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
    	printf("\nEnter details :\n");
	    printf("Name ?:");          
		scanf("%s",&emp[i].name);
	    printf("ID ?:");            
		scanf("%d",&emp[i].empId);
	    printf("Salary ?:");       
	    scanf("%f",&emp[i].salary);
    }
    for(i=0;i<n;i++)	
    {
	    printf("\nEntered detail is:");
	    printf("Name: %s"   ,emp[i].name);
	    printf("Id: %d"     ,emp[i].empId);
	    printf("Salary: %f\n",emp[i].salary);
    }
    int s=0;
    for(i=0;i<n;i++)
    {
    	s=s+emp[i].salary;
	}
    printf("%d\n",s);
    int avg=s/5;
    printf("avg is %d\n",avg);
    return 0;
}
