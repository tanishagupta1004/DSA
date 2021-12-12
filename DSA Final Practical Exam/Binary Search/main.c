#include <stdio.h>
#include <stdlib.h>
int binary_search(int data, int i)
{
    int n,A[100],left,mid,right;
   printf("enter the total no of elements :\n");
   scanf("%d",&n);
   printf("enter the values of all the elements\n");
   for(i=0;i<n;i++)
   {
       scanf("%d",&A[i]);
   }
   printf("Enter the element you want to search \n");
   scanf("%d",&data);
   left=0;
   right=n-1;
   mid=(left+right)/2;
   while(left<=right)
   {
       if(data<A[mid])
       {
           right=mid-1;
           mid=(left+right)/2;
       }
       else if(data>A[mid])
       {
           left=mid+1;
           mid=(left+right)/2;
       }
       else
       {
           printf("Data is found at %d location and the value is %d\n",mid+1,data);
       }


   return 1;

   }

}
int main()
{
int data,i;
int result=binary_search(data,i);
if(result==1)
{
    printf("%d found at %d location",data,i);
}


else
{
    printf("Element not found");

}
return 0;
}
