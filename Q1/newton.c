void newtons_method(double x0, double tol)
{
    int max_iter = 1000;
    double x = x0;
	clock_t start = clock();
    for (int i = 0; i < max_iter; i++) 
	{
		//Calculations
        double x1 = x - f(x) / df(x);

		//Tolerance check
        if (fabs(f(x1)) <= tol) 
		{
            clock_t end = clock();
    		double time_spent = ((double)(end - start)) / CLOCKS_PER_SEC;
    		printf("Newton's Method:	Root = %.8f, Iterations = %d, Time = %f seconds\n", x1, i+1, time_spent);
            return;
        }

		//New assignations
        x = x1;
    }
    printf("Newton's Method: Did not converge\n");
}
