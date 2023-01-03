#include <stdio.h>
#include <stdlib.h>
#include <string.h>
char *cara(char *string, char c)
{
   if (*(string) != c)
   {
      printf("%c", *string);
   }
   if (*(string) == '\0')
   {
      return(NULL);
   }
   return(cara((string + 1), c));
}

int main()
{
   char str1[64];
   char c;

   fgets(str1, 64, stdin);
   scanf("%c", &c);
   cara(str1, c);
   return(0);
}
