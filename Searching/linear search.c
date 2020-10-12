#include<stdio.h>
  
int main()
{
    int a[20],i,num,n,f=0;
    printf("enter size");
    scanf("%d",&n);
     printf("Enter array elements");
    for(i=0;i<n;++i)
    scanf("%d",&a[i]);
    printf("Enter element to search:");
    scanf("%d",&num);
    for(i=0;i<n;++i)
        if(a[i]==num)
        {
            f=1;
            break;
        }
     if(f==1)
        printf("Element found at index %d",i);
    else
        printf("Element not found");
}
