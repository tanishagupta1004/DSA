#include <stdio.h>
#include <stdlib.h>
int adj_mat[10][10];
int main()
{
   int node,edges,sources,destination;
   printf("Enter no of nodes");
   scanf("%d",&node);
   printf("Enter no of edges");
   scanf("%d",&edges);
   for(int i=1;i<=edges;i++)
   {
    printf("Enter no of source");
   scanf("%d",&sources);
   printf("Enter no of destination");
   scanf("%d",&destination);
    adj_mat[sources][destination]=1;
   adj_mat[destination][sources]=1;// Don't Use if Directed Graph Exist
   }
   for(int i=0;i<node;i++)
   {

       for(int j=0;j<node;j++)
       {
           printf("%d\t",adj_mat[i][j]);
       }
       printf("\n");
   }



    return 0;
}
