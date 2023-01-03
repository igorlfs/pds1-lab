#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main () {
	char str1[20], str2[10];
	setbuf(stdin,NULL);
	fgets(str1,10, stdin);
	str1[strlen(str1)-1]='\0';
	fgets(str2,10, stdin);
	strcat(str1,str2);
	fputs(str1, stdout);
	return 0;
}
