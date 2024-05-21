#include "Q4.h"

int main()
{
	/*
	In question 4, [2,pi] interval is linear so we should
	use trapezoidal method for best results.

	After that, we will apply simpson (1/3) method for best result
	because remaining function values are not linear in [pi, 2pi] interval.
	*/

	//First 5 dots are linear [2, 3.1416], then we apply trapezoidal method for 5 dots.
    double integral_trapezoidal = trapezoidal(&x[0], &y[0], 5);
    
    //Applying simpson 1/3 method for remained dots [3.1416, 6.2832].
    double integral_simpson = simpson(&x[4], &y[4], 11);
    
    //Total integral
    double integral = integral_trapezoidal + integral_simpson;
    
    printf("The integral that calculated with trapezoidal method: 	%lf\n", integral_trapezoidal);
    printf("The integral that calculated with simpson (1/3) method: %lf\n", integral_simpson);
    printf("Total integral: %lf\n", integral);

    getchar();
    return 0;
}
