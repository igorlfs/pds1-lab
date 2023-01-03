#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main () {
	char str[64],a,b;
	fgets(str, 64, stdin);
	a=getchar();
	getchar();
	b=getchar();
	for (int i=0; str[i]!='\0'; i++ ) {
		if (str[i]==a) {
			str[i]=b;
			break;
		}
	}
	printf("%s",str);
	return 0;
}
