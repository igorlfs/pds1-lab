#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main () {
	char str[64];
	fgets(str, 64, stdin);
	str[strlen(str)-1]='\0';
	for (int i=(strlen(str)); i>-1; i--) {
		printf("%c",str[i]);
	}
	putchar('\n');
	return 0;
}
