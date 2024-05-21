#include <stdio.h>
#include <stdlib.h>
#include <math.h>

// Define the data points
double x[] = {-3, 1, 3, 4, 6, 9};
double y[] = {1, 3, 7, 10, 20, 60};

//Variables for code
double x_val;
int n = 6;
double a[5], b[5], c[6], d[5];
double exp_a, exp_b;

#include "lagrange_interpolation.c"
#include "cubic_spline.c"
#include "exponential_fit.c"