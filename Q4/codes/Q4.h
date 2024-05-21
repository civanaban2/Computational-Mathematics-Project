//Necessary libraries
#include <stdio.h>
#include <math.h>

//Integral functions made by our group.
#include "trapezoidal.c"
#include "simpson.c"

//Given x and f(x) values in question 4.
double x[] = {	2.0000, 2.3142, 2.6283, 2.9425, 3.1416, 
				3.4558, 3.7699, 4.0841, 4.3982, 4.7124,
				5.0265, 5.3407, 5.6549, 5.9690, 6.2832};

double y[] = {	16.000, 16.942, 17.885, 18.827, 19.425,
				4.4894, 8.2196, 21.763, 5.1045, 14.137,
				23.170, 6.5116, 20.055, 23.785, 8.8496};