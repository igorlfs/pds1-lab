#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int cara(char *string, char c)
{
   int n = 0;

   if (*(string) == c)
   {
      n++;
   }
   if (*(string) == '\0')
   {
      return(0);
   }
   return(n + cara((string + 1), c));
}

int main()
{
   char str1[64];
   char c;

   fgets(str1, 64, stdin);
   scanf("%c", &c);
   printf("%d\n", cara(str1, c));
   return(0);
}
