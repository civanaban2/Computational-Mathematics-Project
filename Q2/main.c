#include "Q2.h"

int main() 
{
	//Calculations for lagrange interpolation
	printf("\nEnter the x value that you want to calculate: ");
	scanf("%lf", &x_val);
 	printf("\nLagrange Interpolation for first 5 points: f(%.2f) = %lf\n", x_val, lagrange_interpolation(x_val, x, 5));
 	printf("Lagrange Interpolation for all 6 points: f(%.2f) = %lf\n", x_val, lagrange_interpolation(x_val, x, 6));

	//Calculations for cubic spline coefficients
	printf("------------------------------------------------------");
	free_cubic_spline(n, x, y, a, b, c, d);
	printf("\nCubic Spline Coefficients:\n\n");

	for (int i = 0; i < n-1; i++)
	{
		printf("Spline %d:\n", i);
		printf("a: %.6f\n", a[i]);
		printf("b: %.6f\n", b[i]);
		printf("c: %.6f\n", c[i]);
		printf("d: %.6f\n\n", d[i]);
	}

	//Calculations for exponential fitting
	printf("------------------------------------------------------");
	exponential_fit(n, x, y, &exp_a, &exp_b);

	printf("\nExponential Fit Coefficients:\n");
	printf("a: %.6f\n", exp_a);
	printf("b: %.6f\n", exp_b);
	getchar();
	getchar();
    return 0;
}
