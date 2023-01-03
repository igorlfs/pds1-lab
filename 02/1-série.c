#include <stdio.h>
#include <stdlib.h>
int main () {
	int a,n,x0,x1,xn;
	scanf("%d%d%d",&n,&x0,&x1);
	printf("X0: %d\n",x0);
	printf("X1: %d\n",x1);
	/* calcule o n-ésimo termo (xn) usando o (n-1)-ésimo termo (x1)
	 * e o (n-2)-ésimo termo (x0) pela fórmula. Os termos x0 e x1
	 * precisam ser trocados para a recursividade funcionar */
	for (a=2;a<=n;++a) {
		xn = 4*x1 -2*x0;
		x0=x1;
		x1=xn;
		printf("X%d: %d\n",a,xn);
	}
	return 0;
}
