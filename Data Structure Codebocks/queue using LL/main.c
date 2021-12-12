#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next ;

};
struct node *front;
struct node *rear;
void enqueue(int value)
{
    struct node *newnode;
    newnode=(struct node*)malloc(sizeof(struct node));
    newnode->data=value;
    newnode->next=NULL;
    if(front==NULL && rear==NULL)
    {
       front=rear=newnode;
    }
    else
    {
        rear->next=newnode;
        rear=newnode;
    }
}
void display()
{
    struct node *temp;
    temp=front;
    if(front==NULL && rear==NULL)
    {
        printf("Queue is Empty");
    }
    else
    {
        printf("Queue's Element are:\n");
        while(temp!=NULL)
        {
            printf("%d\n",temp->data);
            temp=temp->next;
        }

    }

}
void dequeue()
{
    struct node *temp;
    temp=front;
     if(front==NULL && rear==NULL)
    {
        printf("Queue is Empty");
    }
    else
    {
        printf("Deleted element is %d\n",front->data);
        front=front->next;
        free(temp);


    }
}

int main()
{
    int ch,value;
    do
    {
        printf("\n Select any one operation \n");
        printf("\n 1. Enqueue\n 2. Dequeue\n 3. Display \n");
        scanf("%d",&ch);
        switch(ch)
        {
        case 1:
            printf("Enter the value to be inserted in an queue");
            scanf("%d",&value);
            enqueue(value);
            break;
        case 2:
            dequeue();
            break;
        case 3:
            display();
            break;
        }
    }while(ch!=4);

    return 0;
}
