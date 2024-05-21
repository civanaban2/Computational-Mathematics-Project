#include "Q1.h"

int main()
{
    double tol = 1e-5;

    newtons_method(1.6, tol);
    secant_method(1.6, 1.7, tol);
    mullers_method(1.6, 1.7, 1.8, tol);
    regula_falsi_method(1.6, 1.7, tol);
    fix_point_method(1.6, tol);

	getchar();
    return 0;
}
