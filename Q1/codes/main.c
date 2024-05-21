#include "Q1.h"

int main()
{
    double tol = 1e-5;
	LARGE_INTEGER frequency, start, end;

    QueryPerformanceFrequency(&frequency);
    QueryPerformanceCounter(&start);

    newtons_method(1.6, tol);
    secant_method(1.6, 1.7, tol);
    mullers_method(1.6, 1.7, 1.8, tol);
    regula_falsi_method(1.6, 1.7, tol);
    fix_point_method(1.6, tol);

	//CPU Time calculations
	QueryPerformanceCounter(&end);
    double time_spent = (double)(end.QuadPart - start.QuadPart) / frequency.QuadPart;
	
	printf("Total time = %.7f seconds\n", time_spent);

	getchar();
    return 0;
}
