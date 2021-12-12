#include<stdio.h>
#include<stdlib.h>

struct node
{
    int n,priority;
    struct node *next;
};
struct node*f=NULL;
struct node*r=NULL;

void insert(int n, int priority)
{
    struct node *p=(struct node *)malloc(sizeof(struct node));
    p->n=n;
    p->priority=priority;
    p->next=NULL;
    if(f==NULL)
    {
        f=p;
        r=p;
        return ;
    }
    if(p->priority > f->priority)
    {
        p->next = f;
        f = p;
        return;

    }
    struct node* hlpptr = f;
    while(hlpptr->next!= NULL && hlpptr->next->priority>=p->priority)
    {
        hlpptr = hlpptr->next;
    }
    p->next = hlpptr->next;
    hlpptr->next = p;
    return;
}

void deleten()
{
    if(f == NULL)
    {
        printf("Queue is empty\n");
        return;

    }
    struct node* hlpptr = f;
    if(f->next == NULL)
    {
        free(hlpptr);
        f = NULL;
        r = NULL;
        return;
    }
    f = f->next;
    free(hlpptr);
    return;
}

void display()
{
    printf("\n\n");
    struct node* ptr = f;
    if(ptr==NULL)
    {
        printf("Queue is Empty\n");
        return;
    }
    while(ptr!=NULL)
    {
        printf("Number is: %d\t Priority is %d\n",ptr->n,ptr->priority);

        printf("\n\n");
        ptr = ptr -> next;
    }
    return;
}

int main()
{

    int ch,n,priority;
   do
    {
        printf("\nChoose from the following \n1.Insert \n2.Delete \n3.Display \n4.Quit \nEnter your choice: \n");
        scanf("%d",&ch);
        switch(ch)
        {
            case(1):
            printf("\nEnter the no: ");
            scanf("%d",&n);
            printf("\nEnter the priority: ");
            scanf("%d",&priority);
            insert(n,priority);
            display();
            break;
            case(2):
            deleten();
            break;
            case(3):
            display();
            break;
            case(4):

            break;
        }
    }while(ch!=4);
}
