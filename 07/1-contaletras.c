#include <stdio.h>
#include <stdlib.h>

/* Para ler um parâmetro, preciso dar dois
 * parâmetros para a função main: argc e argv
 * argc é inteiro e é a quantidade de parâmetros
 * argv é uma string e o nome de cada argumento */
int main(int argc, char *argv[])
{
   char c;
   int  tot = 0;

   /* Defino um 'manipulador de arquivos'
    * para abrir/manipular/fechar o arquivo */
   FILE *fh = fopen(argv[1], "r");

   if (argc == 1)
   {
      printf("digite o nome do arquivo de texto\n");
      exit(1);
   }
   if (fh == NULL)
   {
      perror("Erro: ");
      exit(1);
   }
   while ((c = fgetc(fh)) != EOF)
   {
      if (c == 'a')
      {
         tot++;
      }
   }
   fclose(fh);
   printf("%d\n", tot);
   return(0);
}
