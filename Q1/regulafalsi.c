void regula_falsi_method(double x0, double x1, double tol)
{
	int max_iter = 1000;
    double x2;
	clock_t start = clock();
    for (int i = 0; i < max_iter; i++)
	{
		//Calculations for regula falsi method
		x2 = (x1*f(x0) - x0*f(x1)) / (f(x0) - f(x1));

		//Tolerance Check
		if (fabs(f(x2)) <= tol)
		{
			clock_t end = clock();
			double time_spent = (double)(end - start) / CLOCKS_PER_SEC;
			printf("Regula Falsi Method:	Root = %.8f, Iterations = %d, Time = %f seconds\n", x2, i+1, time_spent);
			return;
		}
        
		//New assignations
		if (f(x0) * f(x2) < 0)
        	x1 = x2;
        else
            x0 = x2;
    }
    printf("Regula Falsi Method: Did not converge\n");
}
