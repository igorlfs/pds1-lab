#include <stdio.h>
#include <stdlib.h>
#include <math.h>
long long int somaprimos (long long int p[], long long int a) {
	long long int soma;
	soma=0;
	for (long long int i=0; i<a; i++)
		soma+=p[i];
	return soma;
}
long long int primo (long long int n) {
	long long int i,j;
	long long int primos[n];
	primos[0]=2;
	long long int b=3;
	for (i=1;i<n;) 
	{
		for (j=2;;j++)
			if ((b%j)==0)
				break;
			else if ( j > sqrt(b) )
			{
				primos[i]=b;
				i++;
				break;
			}
		b++;
	}
	return (somaprimos(primos,n));
}
int main () {
	long long int x;
	while (scanf("%lld", &x) != EOF)
	printf("%lld\n", primo(x));
	return 0;
}
