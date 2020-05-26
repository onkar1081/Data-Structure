#include<stdio.h>
#include<stdlib.h>
#define MAX 9
int rear=-1;
int front=-1;
int arr[9];
int a,b,c,ch;
void enqueue(int a)
{
    if(rear==-1)
    {
        front=0;
    }
    if(rear==MAX-1)
    {
        printf("Queue is Full.....");
    }
    else
    {
        rear++;
        arr[rear]=a;
        printf("Enqueued item is %d",a);
    }
}
void dequeue()
{
    if(front==-1)
    {
        printf("Queue is Empty......");
    }
    if(front>=MAX)
    {
        printf("Queue is Empty......");
    }
    else
    {
        printf("Dequeued item is %d",arr[front]);
        front++;
    }
}
void show()
{
    int i;
    for(i=front; i<=rear; i++)
    {
        printf("\n%d",arr[i]);
    }
}
void main()
{
   do
    {
        printf("\nEnter 1.Enqueue 2.Show 3.Dequeue 4.Exit\n");
        scanf("%d",&ch);
        switch(ch)
        {
        case 1:
            printf("Enter element\n");
            scanf("%d",&c);
            enqueue(c);
            break;
        case 2:
            show();
            break;
        case 3:
            dequeue();
            break;
        case 4:
            exit(0);
        default:
        {
            printf("\nWrong Choice");
            break;
        }
        }
    }while(ch!=4);
}
