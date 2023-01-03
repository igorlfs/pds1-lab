#include <stdio.h>
#include <stdlib.h>
int contagem (int d, int m, int a) {
	int dias2020[13]={0,31,29,31,30,31,30,31,31,30,31,30,31};
	int dias[13]={0,31,28,31,30,31,30,31,31,30,31,30,31};
	if ((a%4==0 && a%100!=0) || a%400==0)
		dias[2]=29;
	int i;
	int t=1;
	if (a < 2020 )
	{
		for ( i=a+1; i<2020; i++)
			t+=(i%4==0) ? 366 : 365;
		t+=17;
		t+=dias[m]-d;
		for ( i=0; i<9; i++)
			t+=dias2020[i];
		for ( i=m+1; i<13; i++)
			t+=dias[i];
	}
	else if (a == 2020)
	{
		for (i=m+1; i<9; i++)
			t+=dias[i];
		if ( m < 9)
			t+=17+(dias[m]-d);
		else
			t+=17-d;
	}
	return t;
}

int main () {
	int dia, mes, ano;
	while (scanf("%d %d %d", &dia, &mes, &ano) != EOF)
		printf("%d\n",contagem(dia,mes,ano));
	return 0;
}
