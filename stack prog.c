#include <stdio.h>
#include<stdlib.h>
#define MAX 5
int top=-1;
int arr[5];
int a,ch;
void push(int a)
{
    if(top==MAX-1)
    {
        printf("\nStack is full....");
    }
    else
    {
        top++;
        arr[top]=a;
        printf("Pushed item is %d",arr[top]);
    }
}
void pop()
{
    if(top==-1)
    {
        printf("\nStack is empty...");
    }
    else
    {
        printf("\nPoped item is %d",arr[top]);
        top--;
    }
}
void show()
{
    int i;
    for(i=top; i>=0; i--)
    {
        printf("\n%d",arr[i]);
    }
}
int main()
{
    do
    {

        printf("\nEnter 1.Push 2.Show 3.Pop 4.Exit\n");
        scanf("%d",&ch);
        switch(ch)
        {
        case 1:
            printf("Enter element\n");
            scanf("%d",&a);
            push(a);
            break;
        case 2:
            show();
            break;
        case 3:
            pop();
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

