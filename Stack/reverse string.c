#include <stdio.h>
#include <string.h>
#define MAX 100
int top=-1;
int item;
char string[MAX];
void push(char item);
char pop(void);
 
void push(char item)
{
     if(top==MAX-1)
        printf("\nStack is FULL!\n");
     else
     {
    top=top+1;
    string[top]=item;
	 }
}
char pop()
{
     if(top==-1)
        printf("\nStack is EMPTY!\n");
     else
     {
    item = string[top];
    top=top-1;
    return item;
	 }
}
  
int main()
{
    char str[MAX];
    int i;
    printf("Input a string: ");
    gets(str);
    
    for(i=0;i<strlen(str);i++)
        push(str[i]);
        
    for(i=0;i<strlen(str);i++)
        str[i]=pop();

    printf("Reversed String is: %s\n",str);
}


