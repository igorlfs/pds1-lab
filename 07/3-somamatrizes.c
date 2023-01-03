#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main () {
	int mat1[5][5];
	int mat2[5][5];
	int soma[5][5];
	char arq[32];
	setbuf(stdin,NULL);
	fgets(arq,32,stdin);
	arq[strlen(arq)-1]='\0';
	FILE *fh;
	fh = fopen (arq,"rb");
	if (fh == NULL)
		exit (1);
	int i,j;
	for (i=0; i<5; i++)
		for (j=0; j<5; j++)
				fscanf(fh,"%d",&mat1[i][j]);
	for (i=0; i<5; i++)
	{
		for (j=0; j<5; j++)
		{
			fscanf(fh,"%d",&mat2[i][j]);
			soma[i][j]=mat1[i][j]+mat2[i][j];
			printf("%d ",soma[i][j]);
		}
		putchar('\n');
	} 
	return 0;
}
