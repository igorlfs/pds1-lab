#include <stdio.h>
#include <stdlib.h>
int main () {
	int x, a, A, b, B, c, C, d, D;
	scanf("%d",&x);
	a=b=c=d=0;
	A=B=C=D=x;
/*	int x,arr[3],ARR[3],i;
	int num[4]={{2},{3},{5}};
	scanf("%d",&x);
	for (i=0;i<3;i++) {
		ARR[i]=x;
		while (ARR[i] > (x % num[i])) {
			ARR[i] = ARR[i] - num[i];
			arr[i]++;
		}
		printf("Múltiplos de %d: %d\n",num[i],arr[i]);
	} 
	PEDIR HELP AOS UNIVERSITÁRIOS*/
	while ( A > (x % 2)) {
		A=A-2;
		++a;
	}
	while ( B > (x % 3)) {
		B=B-3;
		++b;
	}
	while ( C > (x % 5)) {
		C=C-5;
		++c;
	}
	while ( D > (x % 30)) {
		D=D-30;
		++d;
	} 
	printf("Múltiplos de 2: %d\nMúltiplos de 3: %d\nMúltiplos de 5: %d\nMúltiplos de todos: %d\n", a,b,c,d);
	return 0;
}
