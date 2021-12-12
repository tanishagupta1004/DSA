#include <stdio.h>
#include <stdlib.h>
#define size 5

    int queue[size];
    int front=-1;
    int rear=-1;

void enqueuerear(int value)
{
    if(front==-1 && rear ==-1)
    {
        front=rear=0;
        queue[rear]=value;
    }
    else if(((rear+1)%size)==front)
    {
        printf("Queue is Full");
    }
    else
    {
        rear=(rear+1)%size;
        queue[rear]=value;
    }
}
void enqueuefront(int value)
{
    if(front==-1 && rear ==-1)
    {
        front=rear=0;
        queue[rear]=value;
    }
    else if(((rear+1)%size)==front)
    {
        printf("Queue is Full");
    }
    else if(front==0)
    {
       front=size-1;
       queue[front]=value;
    }
    else
    {
        front--;
        queue[front]=value;
    }
}
void display()
{

    if(front==-1 && rear==-1)
    {
        printf("Queue is Empty");
    }

    else
    {
        int i=front;
        printf("Elements in a Dequeue is \n");
        while(i!=rear)
        {
            printf("%d\n",queue[i]);
            i=(i+1)%size;
        }
        printf("%d",queue[rear]);
    }
}
void dequeuefront()
{
    if(front==-1 && rear==-1)
    {
        printf("Queue is Empty");
    }
    else if(front==rear)//Only one element in an queue
    {
        printf("Deleted Element is %d",queue[front]);
        front=rear=-1;
    }
    else// Having more than one element in an queue
    {
       printf("Deleted element is %d",queue[front]);
       front=(front+1)%size;
    }
}
void dequeuerear()
{
    if(front==-1 && rear==-1)
    {
        printf("Queue is Empty");
    }
    else if(front==rear)//Only one element in an queue
    {
        printf("Deleted Element is %d",queue[front]);
        front=rear=-1;
    }
    else if(rear==0)// Having more than one element in an queue
    {
       printf("Deleted element is %d",queue[front]);
       rear=size-1;
    }
    else
    {
       printf("Deleted element is %d",queue[front]);
       rear--;
    }
}

int main()
{
    int ch,value;
    do
    {
        printf("\nSelect any one of the operation \n");
        printf("\n 1. Enqueuerear \n 2. Dequeuefront \n 3. Enqueuefront \n 4. Dequeuerear \n 5. Display \n");
        scanf("%d",&ch);
        switch(ch)
        {
        case 1:
            printf("Enter a value to be inserted");
            scanf("%d",&value);
            enqueuerear(value);
            break;
        case 2:
            dequeuefront();
            break;
        case 3:
            printf("Enter a value to be inserted");
            scanf("%d",&value);
            enqueuefront(value);
            break;
        case 4:
            dequeuerear();
            break;
        case 5:
            display();
            break;
        }
    }while(ch!=6);

    return 0;
}
