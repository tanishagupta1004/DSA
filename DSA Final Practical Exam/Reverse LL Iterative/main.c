#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};
struct node *head=NULL,*newnode;
void create(int x)
{
    newnode=(struct node *)malloc(sizeof(struct node));
    newnode->data=x;
    newnode->next=NULL;
    if(head==NULL)
    {
        printf("Data is %d\n",newnode->data);
        head=newnode;
        return;
    }
    else
    {
        newnode->next=head;
        head=newnode;
    }
}
void traversal()
{
    struct node *temp;
    temp=head;
    while(temp!=NULL)
    {
        printf("Data is %d\n",temp->data);
        temp=temp->next;
    }

}
void reverse()
{
    struct node *prenode,*currentnode,*nextnode;
    prenode=NULL;
    currentnode=head;
    nextnode=head;
    while(nextnode!=NULL)
    {
        nextnode=nextnode->next;
        currentnode->next=prenode;
        prenode=currentnode;
        currentnode=nextnode;
    }
    head=prenode;
}
int main()
{
   create(1);

   create(2);
   create(3);
   traversal();
   reverse();
   traversal();

    return 0;
}
