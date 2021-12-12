#include <stdio.h>
#include <stdlib.h>
int partition(int A[10],int lb,int ub)
{


   int pivot=A[lb];
   int start=lb;
   int end=ub;
   while(start<end)
   {
    while(A[start]<=pivot)
   {
       start++;
   }
   while(A[end]>pivot)
   {
       end--;
   }
   if(start<end)
   {
       int temp=A[start];
       A[start]=A[end];
       A[end]=temp;
   }
   }

   int temp1=A[lb];
   A[lb]=A[end];
   A[end]=temp1;

   return end;


}


void quicksort(int A[], int lb, int ub)
{

    int n,i;
    if(lb<ub)
    {
        int loc=partition(A,lb,ub);
        quicksort(A,lb,loc-1);
        quicksort(A,loc+1,ub);

    }




    return 0;
}



int main()
{
    int n,i,A[100],lb,ub;
    printf("Enter the total no of elements");
    scanf("%d",&n);
    printf("Enter the value of the elements");
    for(i=0;i<n;i++)
    {
        scanf("%d",&A[i]);
    }
    partition(A,lb,ub);
    quicksort(A,lb,ub);
    printf("\nQuick Sort elements are: \n");
      for(i=0;i<n;i++)
    {
        printf("%d\t",A[i]);
    }

    return 0;
}
