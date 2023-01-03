#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
   char     c;
   long int tot = 0;
   char     arq[32];

   setbuf(stdin, NULL);
   fgets(arq, 32, stdin);
   arq[strlen(arq) - 1] = '\0';
   FILE *fh;

   fh = fopen(arq, "rb");
   if (fh == NULL)
   {
      exit(1);
   }
   while (1)
   {
      c = fgetc(fh);
      if (c == 'a')
      {
         tot++;
      }
      if (feof(fh))
      {
         break;
      }
   }
   fclose(fh);
   printf("%ld\n", tot);
   return(0);
}
