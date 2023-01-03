#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct endereco {
	char rua[50];
	unsigned int numero;
	char estado[4];
};
struct cadastro {
	char nome[50];
	unsigned int idade;
	float salario;
	struct endereco end;
} cad[6];

int main () {
	int i=0;
	while (1) 
	{
		char entrada[9];
		fgets(entrada,9,stdin);
		if (strcmp(entrada,"inserir\n")==0 && i<5) 
		{
			scanf("%s %d %f %s %d %s",cad[i].nome,&cad[i].idade,&cad[i].salario,cad[i].end.rua,&cad[i].end.numero,cad[i].end.estado);
			getchar();
			printf("Registro %s %d %.2f %s %d %s inserido\n",cad[i].nome,cad[i].idade,cad[i].salario,cad[i].end.rua,cad[i].end.numero,cad[i].end.estado);
			i++;
		} 
		else if (strcmp(entrada,"inserir\n")==0) 
		{
			char overflow[200];
			fgets(overflow,200,stdin);
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
					printf("Registro %s %d %.2f %s %d %s\n",cad[j].nome,cad[j].idade,cad[j].salario,cad[j].end.rua,cad[j].end.numero,cad[j].end.estado);
					j=i;
				}
				else if (j==i) 
					printf("Registro ausente\n");
			}
		}
		else if (strcmp(entrada,"alterar\n")==0)
		{
			scanf("%s %d %f %s %d %s",cad[6].nome,&cad[6].idade,&cad[6].salario,cad[6].end.rua,&cad[6].end.numero,cad[6].end.estado);
			getchar();
			for (int j=0; j<=i; j++)
			{
				if (strcmp(cad[6].nome,cad[j].nome)==0)
				{
					cad[j]=cad[6];
					printf("Registro %s %d %.2f %s %d %s alterado\n",cad[j].nome,cad[j].idade,cad[j].salario,cad[j].end.rua,cad[j].end.numero,cad[j].end.estado);
					j=i;
				}
				else if (j==i)
					printf("Registro ausente para alteracao\n");
			}
		}
		else if (strcmp(entrada,"\n"))
			break;
	}
	return 0;
}
