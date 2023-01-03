#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct cadastro {
	char nome[50];
	unsigned int idade;
	float salario;
} cad[4];

int main () {
	int i=0;
	while (1) 
	{
		char entrada[9];
		fgets(entrada,9,stdin);
		if (strcmp(entrada,"inserir\n")==0 && i<4) 
		{
			scanf("%s %d %f",cad[i].nome,&cad[i].idade,&cad[i].salario);
			getchar();
			printf("Registro %s %d %.2f inserido\n",cad[i].nome,cad[i].idade,cad[i].salario);
			i++;
		} 
		else if (strcmp(entrada,"inserir\n")==0) 
		{
			char overflow[50];
			fgets(overflow,50,stdin);
			overflow[strlen(overflow)-1]='\0';
			printf("Espaco insuficiente\n");
		} 
		else if (strcmp(entrada,"mostrar\n")==0) 
		{
			char mostrar[50];
			fgets(mostrar,50,stdin);
			mostrar[strlen(mostrar)-1]='\0';
			for (int j=0; j<=i; j++) 
			{
				if (strcmp(mostrar,cad[j].nome)==0) 
				{
					printf("Registro %s %d %.2f\n",cad[j].nome,cad[j].idade,cad[j].salario);
					j=i;
				}
				else if (j==i) 
					printf("Registro ausente\n");
			}
		}
		else if (strcmp(entrada,"\n"))
			break;
	}
	return 0;
}
