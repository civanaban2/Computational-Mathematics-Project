void exponential_fit(int n, double x[], double y[], double *exp_a, double *exp_b)
{
    double sum_x = 0, sum_y = 0, sum_x2 = 0, sum_xy = 0;

    for (int i = 0; i < n; i++) {
        double log_y = log(y[i]);
        sum_x += x[i];
        sum_y += log_y;
        sum_x2 += x[i] * x[i];
        sum_xy += x[i] * log_y;
    }

    *exp_b = (n * sum_xy - sum_x * sum_y) / (n * sum_x2 - sum_x * sum_x);
    *exp_a = exp((sum_y - (*exp_b) * sum_x) / n);
}
