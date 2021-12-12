#include <stdio.h>
#include <stdlib.h>
int val;
struct queue
{
    int size;
    int front;
    int rear;
    int *arr;
};
void enqueue(struct queue *ptr)
{
    if(ptr->rear==(ptr->size)-1)
    {
        printf("Queue is Full");
    }
    else
    {
        ptr->rear++;
        ptr->arr[ptr->rear]=val;
        if(ptr->front==-1)
        {
            ptr->front=0;
        }
    }

}
void display(struct queue *ptr)
{
    int i;
    if(ptr->rear==-1)
    {
        printf("Queue is Empty");
    }
    else
    {
        printf("Element in an Queue is \n");

    for(i=ptr->front;i<=ptr->rear;i++)
    {
        printf("%d\n",ptr->arr[i]);
    }

    }

}
void dequeue(struct queue *ptr)
{

    if(ptr->rear==-1)
    {
        printf("Queue is Empty");
        return;
    }

   printf("Deleted element is %d",ptr->arr[ptr->front]);
   if(ptr->front==ptr->rear)
    {
        ptr->front=-1;
        ptr->rear=-1;
        return;
    }
    ptr->front++;
    return;

}
int main()
{
    struct queue *q;
    q->front=q->rear=-1;
    q->size=5;
    q->arr=(int *)malloc(q->size*sizeof(int));
    int ch;
    do
    {
        printf("\nSelect any one of the below operation \n");
        printf("\n 1. Enqueue \n 2. Dequeue \n 3. Display \n");
        scanf("%d",&ch);
        switch(ch)
        {
        case 1:
            printf("\n Enter Element inside the queue");
            scanf("%d",&val);
            enqueue(q);
            break;
        case 2:
            dequeue(q);
            break;
        case 3:
            display(q);
            break;
        }
    }while(ch !=4);
    return 0;
}
