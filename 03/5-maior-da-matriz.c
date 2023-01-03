#include <stdio.h>
#include <stdlib.h>
int main () {
	int x,y,i,j;
	scanf("%d%d",&x,&y);
	// Use as entradas pra definir as dimensões do array
	int arr[x][y];
	/* Defina um maior bem pequeno 
	 * Pode dar erro se o 'maior' for
	 * muito grande no começo */
	int maior=-1024;
	for (i=0;i<x;i++) {
		for (j=0;j<y;j++) {
			// Leia cada item da matriz
			scanf("%d",&arr[i][j]);
			/* Se um dos item for maior que o 
			 * maior anterior, salve-o
			 * como o novo maior */
			if ( arr[i][j] > maior ) {
				maior=arr[i][j];
			}
		}
	}
	printf("%d",maior);
	return 0;
}
