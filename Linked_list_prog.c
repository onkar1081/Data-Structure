#include <stdio.h>
#include<stdlib.h>
int c,ch;
struct node
{
    int info;
    struct node * next;
};
struct node *list=NULL;
void add(int c)
{
    struct node *p;
    p=(struct node *)malloc(sizeof(struct node));
    p->info=c;
    if(p->next==NULL)
    {
        printf("FULL......\n");
    }
    if(list==NULL)
    {
        p->next=NULL;
        list=p;
    }
    else
    {
        p->next=list;
        list=p;
    }
}
void show()
{
    struct node *temp;
    temp=list;
    while(temp!=NULL)
    {
        printf("\n%d=%u",temp->info,temp);
        temp=temp->next;
    }
}
void delete()
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
            printf("\nWrong Choice");
            break;
        }
        }
    }
    while(ch!=4);
}



