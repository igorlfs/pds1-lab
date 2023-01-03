#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
   char str[64], sub[64];

   fgets(str, 64, stdin);
   fgets(sub, 64, stdin);
   int var = 0;

   for (int i = 0; str[i] != '\0'; i++)
   {
      if (str[i] == sub[0])
      {
         for (int j = 0; sub[j] != '\0'; j++)
         {
            if (str[i + j] != sub[j])
            {
               break;
            }
            if (j == (strlen(sub) - 2))
            {
               var = 1;
            }
         }
      }
   }
   if (var == 1)
   {
      printf("É substring\n");
   }
   else
   {
      printf("Não é substring\n");
   }
   return(0);
}
