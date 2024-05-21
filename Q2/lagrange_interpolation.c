double lagrange_interpolation(double x_val, double x[], int n)
{
    double result = 0;
    for (int i = 0; i < n; i++)
	{
        double term = y[i];
        for (int j = 0; j < n; j++) {
            if (j != i)
                term = term * (x_val - x[j]) / (x[i] - x[j]);
        }
        result += term;
    }
	
    return result;
}
