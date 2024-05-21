#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <windows.h>

double f(double x)	//f(x) function that is given in question 1
{
    return x*x - 4*exp(-x) - 3;
}

double df(double x)	//Derrivative of f(x)
{
    return 2*x + 4*exp(-x);
}

double g(double x)	//g(x) function for Fix-Point Method x=g(x)
{ 
	return sqrt(4*exp(-x)+3);
}

#include "newton.c"
#include "secant.c"
#include "muller.c"
#include "regulafalsi.c"
#include "fixpoint.c"
