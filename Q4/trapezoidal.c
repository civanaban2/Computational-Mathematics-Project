double trapezoidal(double x[], double y[], int n) {
    double integral = 0;
	
    for (int i = 0; i < n - 1; i++) {
        integral += (x[i + 1] - x[i]) * (y[i + 1] + y[i]) / 2;
    }

    return integral;
}
