#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
};
struct node *head=NULL;
void insert_begin(int x)
{
    struct node *newnode;
    newnode=(struct node *)malloc(sizeof(struct node));
    //printf("Enter the data\n");
    //scanf("%d",&newnode->data);
    newnode->data=x;
    newnode->next=NULL;
    if(head==NULL)
    {
        //printf("Linked List data is %d\n",newnode->data);
        head=newnode;
        return;
    }
    else
    {
        newnode->next=head;
        head=newnode;
    }

}
void del_beg()
{
    struct node *temp;
    temp=head;
    head=head->next;
    free(temp);
}
void insert_end(int y)
{
     struct node *newnode,*temp;
 temp=head;
    newnode=(struct node *)malloc(sizeof(struct node));
    //printf("Enter the data\n");
    //scanf("%d",&newnode->data);
    newnode->data=y;
    newnode->next=NULL;
     while(temp->next!=NULL)
     {

         temp=temp->next;


     }
     temp->next=newnode;

}
void del_end()
{
    struct node *temp,*prenode;
    temp=head;
    while(temp->next!=NULL)
    {
        prenode=temp;
        temp=temp->next;
    }
    if(temp==head)
    {
        head=NULL;
        free(temp);
    }
    else
    {
        prenode->next=NULL;
        free(temp);
    }
}

void insert_pos(int pos, int z)
{
    struct node *temp,*newnode;
    int i=1,count;

    struct node* current = head;  // Initialize current
    while (current != NULL)
    {
        count++;
        current = current->next;
        return count;
    }
    if(pos>count)
    {
        printf("Invalid Postion");
    }
    else
    {
        temp=head;
        while(i<temp)
        {
            temp=temp->next;
            i++;
        }
    }
    newnode=(struct node *)malloc(sizeof(struct node));
    newnode->data=z;
    newnode->next=temp->next;
    temp->next=newnode;


}
void del_pos()
{
    struct node *nextnode,*temp;
    int pos,i=1;
    temp=head;
    printf("Enter the position you want to del \n");
    scanf("%d",&pos);
    while(i<pos-1)
    {
        temp=temp->next;
        i++;
    }
    nextnode=temp->next;
    temp->next=nextnode->next;
    free(nextnode);
}
void traversal()
{
    struct node *temp;
    temp=head;
    while(temp!=NULL)
    {
        printf("Linked List data is %d\n",temp->data);
        temp=temp->next;
    }
}
int main()
{
    insert_begin(7);
    insert_end(11);


    insert_begin(8);
     insert_begin(9);
      insert_begin(10);
      insert_pos(2,15);
    traversal();
    del_beg();
    del_end();
    traversal();
    del_pos();
    traversal();

    return 0;
}
