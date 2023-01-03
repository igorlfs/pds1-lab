#include <stdio.h>
#include <stdlib.h>
int main () {
	int x,y,i,j;
	scanf("%d%d",&x,&y);
	int normal[x][y];
	int oposta[x][y];
	for (i=0;i<x;++i) {
		for (j=0;j<y;++j) {
			scanf("%d ",&normal[i][j]);
			//	oposta[i][j]= -1 * normal[i][j];
			//	printf("%d ",oposta[i][j]);
			//printf("%d",normal[i][j]);
		}
		//putchar('\n');
	}
	for (i=0;i<x;++i) {
		for (j=0;j<y;++j) {
			printf("%d ",normal[i][j]);
		}
		putchar('\n');
	}
	return 0;
}
