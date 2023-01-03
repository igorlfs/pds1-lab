#include <stdio.h>
#include <stdlib.h>
int main () {
	int x,i,n;
	scanf("%d",&x);
	for (i=0,n=0;i<x;i++) {
		n=n+i+1;
	}
	printf("%d\n",n);
	return 0;
}
