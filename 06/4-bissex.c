#include <stdio.h>
#include <stdlib.h>
int bissex (int a) {
	if ((a%4==0 && a%100!=0) || (a%400==0))
		return 1;
	else
		return 0;
}
int main () {
	int x;
	while ((scanf("%d",&x) != EOF))
		printf("%d\n",bissex(x));
	return 0;
}
