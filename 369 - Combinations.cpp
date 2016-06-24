#include <cstdio>

double comb(double a, double b)
{
	double res = 1;
	int l;

	a - b > b ? b = b : b = a - b;

	for(l = 0; l < b; l++)
		res *= (a-l) / (b - l);

	return res;
}

int main()
{
	int a, b;

	while(scanf("%d %d", &a, &b))
	{
	    if(a == 0 && b == 0)
            return 0;

        printf("%d things taken %d at a time is %.0lf exactly.\n", a, b, comb(a,b));
	}

	return 0;
}
