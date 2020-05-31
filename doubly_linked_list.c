#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
struct node
{
    struct node *prev;
    int info;
    struct node *next;
};
struct node *list=NULL;
int ch,c;
void add(int c)
{
    struct node *p,*temp,*q;
    p=(struct node *)malloc(sizeof(struct node));
    p->info=c;
    if(list==NULL)
    {
        p->prev=NULL;
        p->next=NULL;
        list=p;
    }
    else
    {
        p->next=list;
        list->prev=p;
        list=p;
    }
}
void show()
{
    struct node *temp;
    temp=list;
    while(temp!=NULL)
    {
        printf("%d\n",temp->info);
        temp=temp->next;


    }
}
void deletenod()
{
    struct node *q;
    q=list;
    if(list==NULL)
    {
        printf("Linked list is Empty\n");
    }
    else
    {
        printf("Deleted element is %d\n",list->info);
        list=list->next;
    }
}
void main()
{
    do
    {
        printf("Enter 1.Add 2.Show 3.Delete 4.Exit\n");
        scanf("%d",&ch);
        switch(ch)
        {
        case 1:
            printf("Enter element\n");
            scanf("%d",&c);
            add(c);
            break;
        case 2:
            show();
            break;
        case 3:
            deletenod();
            break;
        case 4:
            exit(0);
        default:
        {
            printf("\nWrong Choice");
            break;
        }
        }
    }
    while(ch!=4);
}



