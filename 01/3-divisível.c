#include <stdio.h>
#include <stdlib.h>
int main () {
	int x, y, z;
	scanf("%d%d%d",&x,&y,&z);
	/* Olhe o resto de x por y e x por z,
	 * se ambos forem nulos, imprima que
	 * x é divisível;
	 * caso contrário, imprima que x não é */
	if ((!(x%y)) && (!(x%z))) {
		printf("O número é divisível\n");
	} else {
		printf("O número não é divisível\n");
	}
}
