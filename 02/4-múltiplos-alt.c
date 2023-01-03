#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
   int x, a, b, c, d, e, f, g;

   scanf("%d", &x);
   a = floor(x / 2);
   b = floor(x / 3);
   c = floor(x / 5);
   d = floor(x / 6);
   e = floor(x / 10);
   f = floor(x / 15);
   g = floor(x / 30);
   printf("%d\n", a + b + c - d - e - f + g);
   return(0);
}
