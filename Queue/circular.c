//MENU DRIVEN PROGRAM FOR CIRCULAR QUEUE
#include <stdio.h>
#include <stdlib.h>
#define max 5
int cqueue[max];
int f = -1;
int r = -1;

void enqueue()
{
    int item;
    if ((f == 0 && r == max - 1) || (f == r + 1))
    {
        printf("\nQUEUE OVERFLOW!!");
        return;
    }
    if (f == -1)
    {
        f = 0;
        r = 0;
    }
    else if (r == max - 1)
        r = 0;
    else
        r = r + 1;
    printf("\nENTER THE ITEM TO ENQUEUE:");
    scanf("%d", &item);
    cqueue[r] = item;
}

void dequeue()
{
    if (f == -1)
    {
        printf("\nQUEUE UNDERFLOW!!");
        return;
    }
    printf("\nELEMENT DELETED FROM QUEUE IS:%d", cqueue[f]);
    if (f == r)
    {
        f = -1;
        r = -1;
    }
    else if (f == max - 1)
        f = 0;
    else
        f = f + 1;
}

void display()
{
    int i;
    if (f == -1)
    {
        printf("\n QUEUE IS EMPTY");
        return;
    }
    printf("\nQueue Elements:");
    if (f <= r)
    {
        for (i = f; i <= r; i++)
            printf("%d ", cqueue[i]);
    }
    else
    {
        for (i = f; i <= max - 1; i++)
            printf("%d ", cqueue[i]);
        for (i = 0; i <= r; i++)
            printf("%d ", cqueue[i]);
    }
    printf("\n");
}

void main()
{
    int ch;
    while (1)
    {
        printf("\Menu");
        printf("\n1.ENQUEUE");
        printf("\n2.DEQUEUE");
        printf("\n3.DISPLAY");
        printf("\n4.Exit");
        printf("\nEnter Choice");
        scanf("%d", &ch);
        switch (ch)
        {
        case 1:
            enqueue();
            break;
        case 2:
            dequeue();
            break;
        case 3:
            display();
            break;
        case 4:
            exit(0);
        default:
            printf("Invalid choice");
        }
    }
}
