#include <stdio.h>
#include <stdlib.h>
void insertion_sort()
{
    int n,i,j,temp,A[100];
    printf("Enter the no of elements in an array\n");
    scanf("%d",&n);
    printf("Enter the value of element\n");
    for(i=1;i<n;i++)
    {
        scanf("%d\n",&A[i]);
    }
    for(i=1;i<n;i++)
    {
        temp=A[i];
        j=i-1;
        while(j>=0 && A[j]>temp)
        {
            A[j+1]=A[j];
            j--;
        }
        A[j+1]=temp;
        /*for(int k=0;k<n;k++)
        {
            printf("%d\t",A[k]);

        }
        printf("\n");*/
    }
    printf("Insertion Sort is :");
    for(i=0;i<n;i++)
    {
        printf("%d\t",A[i]);
    }
}
int main()
{
    insertion_sort();
    return 0;
}
