#include<stdio.h>
#include<stdlib.h>

struct Node
{
   int data;
   struct Node *next;
}*top = NULL;

void push(int val)
{
   struct Node *newNode;
   newNode = (struct Node*)malloc(sizeof(struct Node));
   newNode->data = val;
   if(top == NULL)
      newNode->next = NULL;
   else
      newNode->next = top;
      top = newNode;
   printf("\nInsertion is Success!!!\n");
}
void pop()
{
   if(top == NULL)
      printf("\nStack is Empty!!!\n");
   else{
      struct Node *temp = top;
      printf("\nDeleted element: %d", temp->data);
      top = temp->next;
      free(temp);
   }
}
void display()
{
     struct Node *temp ;
     temp=top;
   if(temp == NULL)
      printf("\nStack is Empty!!!\n");
   else{
      printf("\n Stack Elements are\n");
      while(temp!=NULL)
      {

          printf("%d\n",temp->data);
          temp=temp->next;
      }
   }
}


void main()
{
   int ch, val;


   do{
      printf("\nSelect any one of the Operation  Operation\n");
      printf("1. Push\n2. Pop\n3. Display\n");
      printf("Enter your choice: ");
      scanf("%d",&ch);
      switch(ch){
	 case 1: printf("Enter the value to be insert: ");
		 scanf("%d", &val);
		 push(val);
		 break;
	 case 2: pop();
            break;
	 case 3: display();
            break;

	 default:
	     printf("\nPlease enter a Valid Choice\n");
      }
   }while(ch!=4);
}
