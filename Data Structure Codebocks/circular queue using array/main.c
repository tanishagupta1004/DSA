#include <stdio.h>
#include <stdlib.h>
#define size 5
typedef struct circular{

    int queue[size];
    int front;
    int rear;
}q;

void enqueue(q *q1,int value)
{
    if(q1->front==-1 && q1->rear ==-1)
    {
        q1->front=q1->rear=0;
        q1->queue[q1->rear]=value;
    }
    else if(((q1->rear+1)%size)==q1->front)
    {
        printf("Queue is Full");
    }
    else
    {
        q1->rear=(q1->rear+1)%size;
        q1->queue[q1->rear]=value;
    }
}
void display(q *q1)
{

    if(q1->front==-1 && q1->rear==-1)
    {
        printf("Queue is Empty");
    }

    else
    {
        int i=q1->front;
        printf("Elements in a Circular Queue is \n");
        while(i!=q1->rear)
        {
            printf("%d\n",q1->queue[i]);
            i=(i+1)%size;
        }
        printf("%d",q1->queue[q1->rear]);
    }
}
void dequeue(q*q1)
{
    if(q1->front==-1 && q1->rear==-1)
    {
        printf("Queue is Empty");
    }
    else if(q1->front==q1->rear)//Only one element in an queue
    {
        printf("Deleted Element is %d",q1->queue[q1->front]);
        q1->front=q1->rear=-1;
    }
    else// Having more than one element in an queue
    {
       printf("Deleted element is %d",q1->queue[q1->front]);
       q1->front=(q1->front+1)%size;
    }
}

int main()
{
    q q2;
    q2.front=-1;
    q2.rear=-1;

    int ch,value;
    do
    {
        printf("\nSelect any one of the operation \n");
        printf("\n 1. Enqueue \n 2. Dequeue \n 3. Display \n");
        scanf("%d",&ch);
        switch(ch)
        {
        case 1:
            printf("Enter a value to be inserted");
            scanf("%d",&value);
            enqueue(&q2,value);
            break;
        case 2:
            dequeue(&q2);
            break;
        case 3:
            display(&q2);
            break;
        }
    }while(ch!=4);

    return 0;
}
