#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
};
struct node *head=NULL,*tail=NULL;
void create()
{
    struct node *newnode;
    newnode=(struct node *)malloc(sizeof(struct node));
    printf("\nEnter the data to be inserted \n");
    scanf("%d",&newnode->data);
    newnode->next=NULL;
    struct node *temp;
    if(head==NULL)
    {
        head=temp=newnode;
    }
    else
    {


        temp->next=newnode;
        temp=newnode;
    }
    temp->next=head;
}
void insert_beg()
{
    struct node *newnode;
    newnode=(struct node *)malloc(sizeof(struct node));
    printf("\nEnter the data to be inserted at the beginning \n");
    scanf("%d",&newnode->data);
    newnode->next=NULL;
    if(tail==NULL)
    {
         tail=newnode;
        tail->next=newnode;

    }
    else
    {
        newnode->next=tail->next;
        tail->next=newnode;
    }
    printf("%d->",tail->data);

}
void insert_end()
{
    struct node *newnode;
    newnode=(struct node *)malloc(sizeof(struct node));
    printf("\nEnter the data to be inserted at the end \n");
    scanf("%d",&newnode->data);
    newnode->next=NULL;
    if(tail==NULL)
    {
        tail=newnode;
        tail->next=newnode;

    }
    else
    {
        newnode->next=tail->next;
        tail->next=newnode;
        tail=newnode;
    }
    printf("%d->",tail->data);

}
void display()
{
    struct node *temp;
    temp=head;
    while(temp->next!=head)
    {
        printf("%d->",temp->data);
        temp=temp->next;
    }
    printf("%d->",temp->data);
}
int main()
{
    create();
    create();
    create();
    create();
    display();
    insert_beg();
    display();
    insert_end();
    display();
    return 0;
}
