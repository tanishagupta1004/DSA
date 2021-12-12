#include <stdio.h>
#include <stdlib.h>

int main()
{
  int A[100],n,i,search;
  printf("Enter the no of elements");
  scanf("%d",&n);
  printf("Enter the value of elements");
  for(i=0;i<n;i++)
  {
      scanf("%d",&A[i]);
  }
  printf("Enter the element you want to search\n");
  scanf("%d",&search);
  for(i=0;i<n;i++)
  {
      if(A[i]==search)
      {
          printf("%d is found at %d location",search,i+1);
          break;
      }

  }
   if(i==n)
      {

      printf("%d is not found",search);

      }



    return 0;
}
