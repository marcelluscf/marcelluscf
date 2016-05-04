//
//marcellus.farias@acad.pucrs.br
//

#include <stdio.h>

double fatorial (double);
	
double fatorial (double n)
{
	double r = 1;
	double f = n;

	for (f = 1; f <= n; f = f + 1)
		r = r * f;

	return r;
}

int main ()

{
	double n;
	scanf ("%lf", &n);
	double f = fatorial (n);
	printf ("N=%lf, F=%lf\n", n, f);
	return 0;
}
