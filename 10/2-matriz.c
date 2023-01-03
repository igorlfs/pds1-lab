#include <stdio.h>
#include <stdlib.h>
int main()
{
   int m, n;

   scanf("%d\n%d", &m, &n);

   int **M;

   M = (int **)malloc(sizeof(int *) * m);
   for (int i = 0; i < m; i++)
   {
      M[i] = (int *)malloc(sizeof(int) * n);
      for (int j = 0; j < n; j++)
      {
         scanf("%d", &M[i][j]);
      }
   }
   for (int i = 0; i < m; i++)
   {
      for (int j = 0; j < n; j++)
      {
         printf("%d ", M[i][j]);
      }
      putchar('\n');
      free(M[i]);
   }
   free(M);
   return(0);
}
