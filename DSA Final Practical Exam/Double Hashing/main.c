#include <stdio.h>
#define SIZE 11

int h[SIZE];

void insert()
{
    int k,idx,i,h1,h2,h3;
    printf("\nEnter a value to be inserted : ");
    scanf("%d",&k);

    h1=k%SIZE;
    h2=8-(k%8);


    for(i=0; i<SIZE; i++)
    {
        idx=(h1+i*h2)%SIZE;

        if(h[idx] == NULL)
        {
            h[idx]=k;
            break;
        }
    }

    if(i == SIZE)
    {
        printf("\nElement cannot be inserted.");
    }
}

void search()
{
    int k,idx,i,h1,h2;
    printf("\nEnter the element to be Searched : ");
    scanf("%d",&k);

    h1=k%SIZE;
    h2=8-(k%8);

    for(i=0; i<SIZE; i++)
    {
        idx=(h1+i*h2)%SIZE;
        if(h[idx]==k)
        {
            printf("Number at index %d",idx);
            break;
        }
    }
    if(i == SIZE)
    {
        printf("\nNot Found.\n");
    }
}
void display()
{
    int i;

    printf("\nElements in the Hash Table are :\n");

    for(i=0; i< SIZE; i++)
    {
        printf("\nIndex - %d    &    Value = %d",i,h[i]);
    }
}

main()
{
    int choice;
    do
    {
        printf("\nPress \n 1.Insert \n 2.Display \n 3.Search \n 4.Exit \n");
        printf("Enter your Choice : ");
        scanf("%d",&choice);

        switch(choice)
        {
        case 1:
            insert();
            break;

        case 2:
            display();
            break;

        case 3:
            search();
            break;


        }
    }while(choice!=4);
}
