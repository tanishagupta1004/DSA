#include <stdio.h>
#include <stdlib.h>
void selection()
{
    int n,i,j,temp,A[100];
    printf("Enter the no of Elements in an Array\n");
    scanf("%d",&n);
    printf("Enter the values of Elements \n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&A[i]);
    }
    for(i=0;i<n-1;i++)  // No of passes
    {
        int min=i;
        for(j=i+1;j<n;j++)
        {
            if(A[j]<A[min])
            {
                min=j;
            }
        }
        if(min !=i)
        {
            temp=A[i];
            A[i]=A[min];
            A[min]=temp;
        }
        printf("\n");
        for(int k=0;k<n;k++)
        {
            printf("%d\t",A[k]);
        }
    }
    printf("\n Selection Sort is: \n");
    for(i=0;i<n;i++)
    {
        printf("%d\t",A[i]);
    }

}
int main()
{
    selection();
    return 0;
}
