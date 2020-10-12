#include<stdio.h>
#include<string.h>
char st[20];
int top=-1;
void push(char);
char pop();
int main()
{
char a[20],t;
int i,f=1;
scanf(“%s”,&a);
for(i=0;i<strlen(a);i++)
{
if(a[i]=='(‘||a[i]=='{‘||a[i]=='[‘)
psh(a[i]);
if(a[i]==’)’||a[i]==’}’||a[i]==’]’)
{
if(top==-1)
f=0;
else
{t=pop();
if(a[i]==’)’&&(t=='[‘||t=='{‘))
f=0;
if(a[i]==’}’&&(t=='(‘||t=='[‘))
f=0;
if(a[i]==’]’&&(t=='{‘||t=='(‘))
f=0;
}
}
}
if(top>=0)
f=0;
if(f==0)
printf(“Unbalanced\n”);
else
printf(“Balanced\n”);
return 0;
}
void push(char a)
{
st[++top]=a;
}
char pop()
{
return st[top–];
}


