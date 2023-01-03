#include <stdio.h>
#include <stdlib.h>
int main (void) {
	float C, F;
	printf("Digite uma temperatura em Celsius: ");
	scanf("%f", &C);
	F = C*1.8+32;
	printf("%.0f",F);
	return 0;
}
