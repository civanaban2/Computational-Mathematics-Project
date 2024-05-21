void mullers_method(double x0, double x1, double x2, double tol)
{
	int max_iter = 1000;
    double h0, h1, d0, d1, a, b, c, delta, x3;
    clock_t start = clock();
	for (int i = 0; i < max_iter; i++)
    {
		//Calculations
        h0 = x1 - x0;
        h1 = x2 - x1;
        d0 = (f(x1) - f(x0)) / h0;
        d1 = (f(x2) - f(x1)) / h1;
        a = (d1 - d0) / (h1 + h0);
        b = a*h1 + d1;
        c = f(x2);
        delta = sqrt(b*b - 4*a*c);
        
		//New root
		if (b >= 0)
            x3 = x2 + (-2*c) / (b + delta);
        else
            x3 = x2 + (-2*c) / (b - delta);
		
		//Tolerance check
		if (fabs(f(x3)) <= tol)
		{
			clock_t end = clock();
			double time_spent = (double)(end - start) / CLOCKS_PER_SEC;
			printf("Muller's Method:	Root = %.8f, Iterations = %d, Time = %f seconds\n", x3, i+1, time_spent);
			return;
		}

		//New assignations
		x0 = x1;
        x1 = x2;
        x2 = x3;
	}
    printf("Muller's Method: Did not converge\n");
}
