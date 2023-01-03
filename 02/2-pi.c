#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main () {
	double fraction, value=0, sign=1, approximation,i;
	scanf("%lf",&approximation);
	for ( i=1; fabs(M_PI - value) > approximation; i=2+i) {
		fraction=(4/i)*sign;
		sign=sign*-1;
		value+=fraction;
	}
	printf("%.0f\n",floor(i/2));
	return 0;
}
