#include "Q1.h"

int main()
{
    double tol = 1e-5;
	clock_t start = clock();

    newtons_method(1.6, tol);
    secant_method(1.6, 1.7, tol);
    mullers_method(1.6, 1.7, 1.8, tol);
    regula_falsi_method(1.6, 1.7, tol);
    fix_point_method(1.6, tol);

	clock_t end = clock();
	double time_spent = ((double)(end - start)) / CLOCKS_PER_SEC;
	printf("Total time = %f seconds\n", time_spent);

	getchar();
    return 0;
}
