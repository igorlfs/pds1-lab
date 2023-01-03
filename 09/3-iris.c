#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
struct iris
{
   float cs;
   float ls;
   float cp;
   float lp;
   char  tipo[50];
};
void classificar(struct iris base, struct iris ri[], int n)
{
   float soma[n];
   char  imprime[50];
   float menor;

   strcpy(imprime, ri[0].tipo);

   for (int i = 0; i < n; i++)
   {
      soma[i] = sqrt(pow(base.cs - ri[i].cs, 2) + pow(base.ls - ri[i].ls, 2) + pow(base.cp - ri[i].cp, 2) + pow(base.lp - ri[i].lp, 2));
      if (i == 0)
      {
         menor = soma[i];
      }
      if (soma[i] < menor)
      {
         strcpy(imprime, ri[i].tipo);
         menor = soma[i];
      }
   }
   printf("%s\n", imprime);
}

int main()
{
   int n;

   scanf("%d", &n);
   struct iris ri[n];

   for (int i = 0; i < n; i++)
   {
      scanf("%f %f %f %f %s", &ri[i].cs, &ri[i].ls, &ri[i].cp, &ri[i].lp, ri[i].tipo);
   }
   struct iris base;

   scanf("%f %f %f %f", &base.cs, &base.ls, &base.cp, &base.lp);
   classificar(base, ri, n);
   return(0);
}
