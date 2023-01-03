#include <stdio.h>
#include <stdlib.h>
int main () {
	// Defina um array pra sequência	
	int fib[1000]={0,1};
	int n;
	// Faça até entrar um número negativo ou maior que 1000
	do {
		int i;
		scanf("%d",&n);
		/* Só faça as contas se fib[n] for zero 
		 * Isso reduz as contas caso tenha alguma
		 * entrada repetida */
		if (fib[n]==0) {
			/* Calcule o n-ésimo termo com base nos
			 * dois anteriores */
			for (i=2;i<=n;i++) {
				fib[i]=fib[i-1]+fib[i-2];
			}
		}
		printf("%d\n",fib[n]);
	} while (n > -1 && n < 1000);
	return 0;
}
