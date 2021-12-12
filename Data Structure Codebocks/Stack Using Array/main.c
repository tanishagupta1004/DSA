#include <stdio.h>
#include <stdlib.h>
int val;
struct stack{
int size;
int top;
int *arr;
int i;

};

void push( struct stack *ptr)
{
    if(ptr->top==(ptr->size)-1)
    {
        printf("Stack Overflow");
    }
    else
    {

        ptr->top=ptr->top+1;
        ptr->arr[ptr->top]=val;
    }
}
void display(struct stack *ptr)
{
    if(ptr->top==-1)
    {
        printf("Stack Underflow");
    }
    else
    {

    int i;

        printf("Stack Elements are \n");
        for(i=(ptr->top);i>=0;i--)
        {
            printf("%d\n",ptr->arr[i]);
        }
    }
}
void pop( struct stack *ptr)
{

     if(ptr->top==-1)
    {
        printf("Stack Underflow");
    }
    else
    {
        printf("Deleted element is %d\n",ptr->arr[ptr->top]);
        ptr->top--;
    }

}

int main()
{
    struct stack *s;
    s->size=10;
    s->top=-1;
    s->arr=(int *)malloc(s->size*sizeof(int));
    int ch;
    do
    {
        printf("Select any one of the below operation");
        printf("\n 1. Push \n 2. Pop \n 3. Display \n");
        scanf("%d",&ch);
        switch(ch)
        {
        case 1:
             printf("Enter the element into the stack");
             scanf("%d",&val);
             push(s);
             break;
        case 2:
            pop(s);
            break;
        case 3:
            display(s);
            break;

        }
    }while(ch!=4);
    return 0;
}
