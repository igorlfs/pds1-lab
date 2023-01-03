#include <stdio.h>
#include <stdlib.h>
#include <math.h>
/* Nota: precisa compilar usando a flag '-lm' por causa da bibliotexa math.h
 * Ex: 'gcc 31.c -o one -lm */
int main () {
	unsigned int menor, maior, n, i;
	scanf("%d%d",&menor,&maior);
	if ( menor > 10000 || maior > 10000 ) {
		printf("Erro. Insira um número menor\n");
	}
	// Teste todo i entre o menor e o maior valor.
	for (i=menor;i <= maior; ++i) {
		/* Divida sucessivamente até encontrar resto zero,
		 * o que significa que o número é composto, ou 
		 * n>sqrt(i), o que significa que o número é primo. 
		 * Nesse caso, imprima o número. */
		for ( n=2;; n++) {
			/* Caso especial: menor número é 1
			 * Como 2 é maior que a raiz de 1, sem esse caso
			 * o número 1 seria impresso */
			if ( i==1) {
				break;
			} 
			/* Caso especial: menor número é 1 ou 2
			 * Como 2 é divisível por 2, sem esse caso
			 * o número 1 seria impresso */
			if ( i==2) {
				printf("%d\n",i);
			}
			if ( (i%n)==0) {
				break;
			} else if ( n > sqrt(i)) {
				printf("%d\n",i);
				break;
			}
		}
	}
	return 0;
}
