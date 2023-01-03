#include <stdio.h>
#include <stdlib.h>
int main () {
	int arr[10];
	int i;
	// Leia para cada entrada de 0 a 9
	for (i=0;i<10;i++) {
		scanf("%d",&arr[i]);
	}
	// Imprima na ordem contrária
	for (i=9;i>=0;i--) {
		printf("%d\n",arr[i]);
	}
	return 0;
}
