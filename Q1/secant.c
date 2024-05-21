void secant_method(double x0, double x1, double tol)
{
	int max_iter = 1000;
    double x2;
	LARGE_INTEGER frequency, start, end;

    QueryPerformanceFrequency(&frequency);
    QueryPerformanceCounter(&start);

	for (int i = 0; i < max_iter; i++)
    {
		//Calculations of secant method
		x2 = x1 - f(x1) * (x1 - x0) / (f(x1) - f(x0));

		//Tolerance Check
		if (fabs(f(x2)) <= tol)
		{
			//CPU Time calculations
			QueryPerformanceCounter(&end);
            double time_spent = (double)(end.QuadPart - start.QuadPart) / frequency.QuadPart;

			printf("Secant Method:		Root = %.8f, Iterations = %d, Time = %.7f seconds\n", x2, i+1, time_spent);
			return;
		}

		//New assignations
        x0 = x1;
        x1 = x2;
    }
    printf("Secant Method: Did not converge\n");
}
