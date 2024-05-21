void fix_point_method(double x0, double tol)
{
	int max_iter = 1000;
    double x = x0;
	LARGE_INTEGER frequency, start, end;

    QueryPerformanceFrequency(&frequency);
    QueryPerformanceCounter(&start);

    for (int i = 0; i < max_iter; i++)
	{
		//Calculations (g(x) func is given in Q1.h.)
		x = g(x);

		if (fabs(f(x)) <= tol)
		{
			//CPU Time calculations
			QueryPerformanceCounter(&end);
            double time_spent = (double)(end.QuadPart - start.QuadPart) / frequency.QuadPart;

			printf("Fix-Point Method:	Root = %.8f, Iterations = %d, Time = %.7f seconds\n", x, i+1, time_spent);
			return;
		}
    }
	printf("Fix-Point Method: Did not converge\n");
}