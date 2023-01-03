#include <stdio.h>
#include <stdlib.h>
int main () {
	int i, n;
	n=0;
	/* Enquanto i < 100 adicione 5n imprima;
	 * Adicione 1 a n */
	do {
		i=233+5*n;
		printf("%d\n",i);
		n++;
	} while ( i < 300 );
	/* Resete a variável depois de cada loop */
	n=0;
	do {
		i=306+3*n;
		printf("%d\n",i);
		n++;
	} while ( i < 400 );
	n=0;
	do {
		i=407+5*n;
		printf("%d\n",i);
		n++;
	} while ( i < 457); 
	return 0;
}
