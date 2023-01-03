#include <stdio.h>
#include <stdlib.h>
/* Programa refeito usando arrays */
int main () {
	int x, i;
	/* O 1º array é para a quantidade de notas, o 2º para restos */
	int N[7], r[0];
	/* O 3º são os valores das notas */
	int v[7]={100,50,20,10,5,2,1};
	printf("Digite quantos reais você tem na carteira: ");
	scanf("%d",&x);
	/* faça as contas para o primeiro caso */
	N[0]=x/v[0];
	r[0]=x%v[0];
	printf("%d: %d\n",v[0],N[0]);
	/* repita em laço até o último caso
	 * o caso i depende de i-1, conforme as seguintes contas */
	for (i=0;i<6;i++) {
		N[i+1] = r[i]/v[i+1];
		r[i+1] = (r[i] % v[i+1]);
		printf("%d: %d\n",v[i+1],N[i+1]);
	}
	return 0;
}
