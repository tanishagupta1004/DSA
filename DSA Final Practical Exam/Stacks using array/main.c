#include <stdio.h>
#include <stdlib.h>
int val;
struct stack
{
    int size;
    int *arr;
    int top;

};
void push()
{
    struct stack *s1;
    if(s1->top==(s1->size)-1)
    {
        printf("Stack Overflow");
    }
    else
    {

        s1->top=s1->top+1;
        s1->arr[s1->top]=val;
    }
}
void pop()
{
    struct stack *s1;
    if(s1->top==-1)
    {
        printf("Stack Underflow");
    }
    else
    {
        printf("Deleted element is %d\n",s1->top);
        s1->top--;
    }
}
void display()
{
    struct stack *s1;
    for(int i=s1->top;i>=0;i--)
    {
       printf("Elements are \n",s1->arr[i]);
    }
}
int main()
{
    struct stack *s1;
    int ch;
    s1->top=-1;
    s1->size=10;
    s1->arr=(int *)malloc(s1->size*sizeof(int));
    do
    {
        printf("\n 1. Push\n 2. Pop\n 3. Display \n");
        scanf("%d",&ch);
        switch(ch)
        {
        case 1:
            printf("Enter the element you want to push \n");
            scanf("%d",&val);
            push();
            break;
        case 2:
            pop();
            break;
        case 3:
            display();
            break;
        }
    }while(ch!=4);
    return 0;
}
