#include <stdio.h>
#include <stdlib.h>

void bubble_sort()
{

    int i,j,A[10],n;
    printf("Enter the no of elements in an Array\n");
    scanf("%d",&n);
    printf("Enter the Values of element\n");
    for(i=0;i<n;i++)
    {
       scanf("%d",&A[i]);
    }
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(A[j]<A[i])
            {
            int temp=A[i];
            A[i]=A[j];
            A[j]=temp;
            }
            for(int k=0;k<n;k++)
            {
                printf("%d\t",A[k]);

            }
            printf("\n");


        }
    }
    printf("\nSorted elements in an Bubble sort are\n :");
    for(i=0;i<n;i++)
    {
        printf("%d\t",A[i]);
    }

}
int main()
{
    bubble_sort();

    return 0;
}
