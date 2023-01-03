#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct contact
{
   char name[50];
   int  age;
   char phone[20];
};
int main()
{
   struct contact cont[100];
   struct contact change;
   char           file[32];
   int            nc;
   FILE *         fh;

   setbuf(stdin, NULL);
   fgets(file, 32, stdin);
   file[strlen(file) - 1] = '\0';
   fh = fopen(file, "rb");
   if (fh == NULL)
   {
      exit(1);
   }
   nc = fread(cont, sizeof(struct contact), 100, fh);
   rewind(fh);
   for (int i = 0; i < nc; i++)
   {
      fread(&cont[i], sizeof(struct contact), 1, fh);
   }
   fclose(fh);
   char entrada[10];

   while (fgets(entrada, 10, stdin) != NULL)
   {
      if (strcmp(entrada, "Inserir\n") == 0)
      {
         if (nc < 100)
         {
            scanf("%s %d %s", cont[nc].name, &cont[nc].age, cont[nc].phone);
            fh = fopen(file, "ab");
            fwrite(&cont[nc], sizeof(struct contact), 1, fh);
            fclose(fh);
            printf("Registro %s %d %s inserido\n", cont[nc].name, cont[nc].age, cont[nc].phone);
            nc++;
         }
         else
         {
            printf("Espaco insuficiente\n");
         }
      }
      else if (strcmp(entrada, "Exibir\n") == 0)
      {
         scanf("%s", change.name);
         for (int j = 0; j <= nc; j++)
         {
            if (strcmp(change.name, cont[j].name) == 0)
            {
               printf("Registro %s %d %s exibido\n", cont[j].name, cont[j].age, cont[j].phone);
               j = nc;
            }
            else if (j == nc)
            {
               printf("Registro %s invalido\n", change.name);
            }
         }
      }
      else if (strcmp(entrada, "Excluir\n") == 0)
      {
         scanf("%s", change.name);
         for (int j = 0; j <= nc; j++)
         {
            if (strcmp(change.name, cont[j].name) == 0)
            {
               printf("Registro %s %d %s excluido\n", cont[j].name, cont[j].age, cont[j].phone);
               for (int b = j; b < nc; b++)
               {
                  strcpy(cont[b].name, cont[b + 1].name);
                  cont[b].age = cont[b + 1].age;
                  strcpy(cont[b].phone, cont[b + 1].phone);
               }
               nc--;
               break;
            }
            else if (j == nc)
            {
               printf("Registro %s invalido\n", change.name);
            }
         }
      }
      else if (strcmp(entrada, "Alterar\n") == 0)
      {
         scanf("%s %d %s", change.name, &change.age, change.phone);
         for (int j = 0; j <= nc; j++)
         {
            if (strcmp(change.name, cont[j].name) == 0)
            {
               fh      = fopen(file, "wb");
               cont[j] = change;
               fwrite(cont, sizeof(struct contact), nc, fh);
               printf("Registro %s %d %s alterado\n", cont[j].name, cont[j].age, cont[j].phone);
               j = nc;
               fclose(fh);
            }
            else if (j == nc)
            {
               printf("Registro %s invalido\n", change.name);
            }
         }
      }
   }
   return(0);
}
