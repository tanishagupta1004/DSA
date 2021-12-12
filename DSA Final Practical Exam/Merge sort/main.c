#include <stdio.h>
#include <stdlib.h>
void merge(int A[],int lb,int mid,int ub)
{
   int i,j,k,B[100],n;

   i=lb;
   j=mid+1;
   k=lb;
   while(i<=mid && j<=ub)
   {
       if(A[i]<A[j])
       {
           B[k]=A[i];
           i++;
           k++;
       }
       else
       {
           B[k]=A[j];
           k++;
           j++;
       }
   }
   if(i>mid)
   {
       while(j<=ub)
       {
           B[k]=A[j];
           k++;
           j++;

       }
   }
   if(i<=mid)
   {
       while(i<=mid)
       {
           B[k]=A[i];
           i++;
           k++;
       }
   }

}
void merge_sort(int A[],int lb, int ub)
{
    int B[100];
    if(lb<ub)
    {
       int mid=(lb+ub)/2;
        merge_sort(A,lb,mid+1);
        merge_sort(A,mid+1,ub);
        merge(A,lb,mid,ub);
    }

}
int main()
{
    int A[100],lb,mid,ub,n,i,B[100];
    printf("Enter the total no of elements in an Array \n");
   scanf("%d",&n);
   lb=0;
   ub=n;
   printf("Enter the Value of all the element \n");
   for(i=lb;i<=ub;i++)
   {
       scanf("%d",&A[i]);
   }
    //merge(A,lb,mid,ub);
    merge_sort(A,lb,ub);
    printf("\n Merge sort is \n");
   for(int k=lb;k<=ub;k++)
   {
       printf("%d\t",B[k]);
   }

    return 0;
}
