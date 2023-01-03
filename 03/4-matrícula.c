#include <stdio.h>
#include <stdlib.h>
int main () {
	int aeds, i;
	scanf("%d",&aeds);
	int maeds[aeds];
	// Leia cada entrada de aeds
	for (i=0;i<aeds;i++) {
		scanf("%d",&maeds[i]);
	}
	int calc, j;
	scanf("%d",&calc);
	int mcalc[calc];
	for (j=0;j<calc;j++) {
		// Leia cada entrada de calc
		scanf("%d",&mcalc[j]);
		// Loop pra ver se imprime
		for (i=0;i<aeds;i++) {
			if ( maeds[i] == mcalc[j]) {
				printf("%d\n",mcalc[j]);
			} 
		}
	}
	return 0;
}
