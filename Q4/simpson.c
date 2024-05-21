double simpson(double x[], double y[], int n) {
    double integral = 0;

    for (int i = 0; i <= n-2; i += 2) {
        integral += (x[i + 2] - x[i]) * (y[i] + 4 * y[i + 1] + y[i + 2]) / 6;
    }

    return integral;
}
