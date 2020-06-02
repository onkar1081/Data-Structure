#include <stdio.h>
#include<stdlib.h>
#define MAX 5
struct node
{
    int info;
    struct node * next,*prev;
};
struct node *list=NULL;
int c,ch;
void add(int x)
{
    struct node *p;
    p=(struct node *)malloc(sizeof(struct node));
    p->info=x;
    if(list==NULL)
    {
        //first node
        list=p;
        p->next=list;
        p->prev=list;
    }
    else
    {
        struct node *temp;
        temp=list;
        while(temp->next!=list)
        {
            temp=temp->next;
        }
        p->prev=temp;
        temp->next=p;
        p->next=list;
    }
}
void delete()
{
      struct node *temp,*temp1;
        temp=list;
        while(temp->next!=list)
        {
            temp1=temp;  //second last node address
            temp=temp->next;
        }
        printf("Deleted item %d\n",temp->info);
        temp1->next=list;
}
void show()
{
    struct node *temp;
    temp=list;
    do
    {
        printf("%d=%u=%u\n",temp->info,temp->prev,temp->next);
        temp=temp->next;

    }
    while(temp!=list);
}
int main()
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
            delete();
            break;
        case 4:
            exit(0);
        default:
        {
            printf("Wrong Choice\n");
            break;
        }
        }
    }
    while(ch!=4);
}
