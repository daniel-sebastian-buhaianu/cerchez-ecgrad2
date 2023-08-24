#include <stdio.h>
#include <math.h>

int main()
{
	double a, b, c, d;

	printf("a = "); scanf("%lf", &a);
	printf("b = "); scanf("%lf", &b);
	printf("c = "); scanf("%lf", &c);

	printf("ax^2 + bx + c = 0 <=> %.2lfx^2 + %.2lfx + %.2lf = 0\n", a, b, c);

	d = b*b - 4*a*c;

	printf("d = %.2lf\n", d);

	if (d < 0)
		printf("Ecuatia nu are radacini reale\n");
	else if (d == 0)
		printf("x1 = x2 = %.2lf\n", -b/(2*a));
	else
		printf("x1 = %.2lf, x2 = %.2lf\n",
				(-b + sqrt(d))/(2*a),
				(-b - sqrt(d))/(2*a));
	return 0;
}

