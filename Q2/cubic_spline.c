void free_cubic_spline(int n, double x[], double y[], double a[], double b[], double c[], double d[])
{
    double h[n-1], alpha[n-1], l[n+1], mu[n], z[n+1];
    
    // Step 1: Set up the h and alpha arrays
    for (int i = 0; i < n-1; i++) {
        h[i] = x[i+1] - x[i];
        alpha[i] = (3/h[i]) * (y[i+1] - y[i]) - (3/h[i-1]) * (y[i] - y[i-1]);
    }

    // Step 2: Set up the l, mu, and z arrays
    l[0] = 1;
    mu[0] = 0;
    z[0] = 0;

    for (int i = 1; i < n-1; i++) {
        l[i] = 2 * (x[i+1] - x[i-1]) - h[i-1] * mu[i-1];
        mu[i] = h[i] / l[i];
        z[i] = (alpha[i] - h[i-1] * z[i-1]) / l[i];
    }

    l[n-1] = 1;
    z[n-1] = 0;
    c[n-1] = 0;

    // Step 3: Set up the b, c, and d arrays
    for (int j = n-2; j >= 0; j--) {
        c[j] = z[j] - mu[j] * c[j+1];
        b[j] = (y[j+1] - y[j]) / h[j] - h[j] * (c[j+1] + 2 * c[j]) / 3;
        d[j] = (c[j+1] - c[j]) / (3 * h[j]);
        a[j] = y[j];
    }
}
