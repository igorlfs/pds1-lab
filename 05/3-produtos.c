#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct produtos {
	char nome[50];
	char marca[50];
	float preco;
} pro[8];

int main () {
	float metasoma[9]={0,0,0,0,0,0,0,0,0};
	char metamarca[8][50];
	int med[8]={0,0,0,0,0,0,0};
	int i,j;
	for (i=0; i<8; i++) 
	{
		scanf("%s %s %f",pro[i].nome,pro[i].marca,&pro[i].preco);
		metasoma[9]+=pro[i].preco;
		for(j=0; j<=i; j++)
		{
			if (j==i)
				strcpy(metamarca[j],pro[i].marca);
			else if (strcmp(pro[i].marca,pro[j].marca)==0)
				break;
		}
	}
	for (i=0; i<8; i++) 
	{
		for(j=0; j<8; j++)
			if (strcmp(metamarca[i],pro[j].marca)==0)
			{
				med[i]++;
				metasoma[i]+=pro[j].preco;
			}
		if (med[i]!=0)
			printf("%s %d\n",metamarca[i],med[i]);
	}
	printf("media total %.2f\n",metasoma[9]/8);
	for (i=0; i<8; i++)
		if (med[i]!=0)
			printf("media %s %.2f\n",metamarca[i],metasoma[i]/med[i]);
	return 0;
}
