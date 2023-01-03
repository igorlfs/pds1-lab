#include <stdio.h>
#include <stdlib.h>
enum meses { janeiro=1, fevereiro, marco, abril, maio, junho, julho, agosto, setembro, outubro, novembro, dezembro };
struct data
{
   int        dia;
   enum meses mes;
   int        ano;
};
struct evento
{
   char        nome[100];
   char        local[100];
   struct data d;
};
void cadastrar_eventos(struct evento *agenda, int n)
{
   int i;

   for (i = 0; i < n; i++)
   {
      scanf("%s %s %d %u %d", agenda[i].nome, agenda[i].local, &agenda[i].d.dia, &agenda[i].d.mes, &agenda[i].d.ano);
   }
}

void imprimir_eventos(struct evento *agenda, struct data d, int n)
{
   int i, k = 0;

   for (i = 0; i < n; i++)
   {
      if (d.dia == agenda[i].d.dia && d.mes == agenda[i].d.mes && d.ano == agenda[i].d.ano)
      {
         printf("%s %s\n", agenda[i].nome, agenda[i].local);
         k++;
      }
   }
   if (k == 0)
   {
      printf("Nenhum evento encontrado!\n");
   }
}

int main()
{
   int n;

   scanf("%d", &n);
   struct evento eve[n];

   cadastrar_eventos(eve, n);

   struct data ie;

   scanf("%d %u %d", &ie.dia, &ie.mes, &ie.ano);

   imprimir_eventos(eve, ie, n);
   return(0);
}
