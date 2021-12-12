#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
    struct node *prev;
};
struct node *head=NULL,*tail=NULL;
void create()
{
    struct node *newnode;
    newnode=(struct node *)malloc(sizeof(struct node));
    printf("Enter the data to be inserted");
    scanf("%d",&newnode->data);
    newnode->prev=newnode->next=NULL;
    if(head==NULL)
    {
        head=tail=newnode;
    }
    else
    {
        tail->next=newnode;
        newnode->prev=tail;
        tail=newnode;
    }
}
void insert_beg()
{
    struct node *newnode;
    newnode=(struct node *)malloc(sizeof(struct node));
    printf("\nEnter the data to be inserted at the beginning \n ");
    scanf("%d",&newnode->data);
    newnode->next=NULL;
    newnode->prev=NULL;

    head->prev=newnode;
    newnode->next=head;
    head=newnode;
}
void insert_end()
{
    struct node *newnode;
    newnode=(struct node *)malloc(sizeof(struct node));
    printf("\nEnter the data to be inserted at the end \n ");
    scanf("%d",&newnode->data);
    newnode->next=NULL;
    newnode->prev=NULL;

    tail->next=newnode;
    newnode->prev=tail;
    tail=newnode;
}
void display()
{
    struct node *temp;
    temp=head;
    while(temp!=NULL)
    {
        printf(" %d->\t",temp->data);
        temp=temp->next;
    }
}
void del_beg()
{
    struct node *temp;
    temp=head;
    head=head->next;
    free(temp);
}
void del_end()
{
    struct node *temp;
    temp=tail;
    tail->prev->next=NULL;
    tail=tail->prev;

    free(temp);
}
int main()
{
    create();
    create();
    create();
    display();
    insert_beg();
    display();
    insert_end();
    display();
    printf("\n");
    del_beg();
    display();
    printf("\n");
    del_end();
    display();

    return 0;
}
