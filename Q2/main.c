#include "Q2.h"

int main() 
{
    double x_val;
	while(1)
	{
	printf("\nEnter the x value that you want to calculate: ");
	scanf("%lf", &x_val);
    printf("\nLagrange Interpolation for first 5 points: f(%.2f) = %lf\n", x_val, lagrange_interpolation(x_val, x, 5));
    printf("Lagrange Interpolation for all 6 points: f(%.2f) = %lf\n", x_val, lagrange_interpolation(x_val, x, 6));
	}
    return 0;
}