//3 Points Forward Difference Formula
double forward_difference_3points(double h, double x[], int i) {
    return (-3*x[i] + 4*x[i+1] - x[i+2]) / (2*h);
}

//3 Points Backwards Difference Formula
double backward_difference_3points(double h, double x[], int i) {
    return (x[i-2] - 4*x[i-1] + 3*x[i]) / (2*h);
}

//3 Points Central Difference Formula
double central_difference_3points(double h, double x[], int i) {
    return (x[i+1] - x[i-1]) / (2*h);
}

//5 Points Forward Difference Formula
double forward_difference_5points(double h, double x[], int i) {
    return (-25*x[i] + 48*x[i+1] - 36*x[i+2] + 16*x[i+3] - 3*x[i+4]) / (12*h);
}

//5 Points Central Difference Formula
double central_difference_5points(double h, double x[], int i) {
    return (x[i-2] - 8*x[i-1] + 8*x[i+1] - x[i+2]) / (12*h);
}

//3 Points Forward Difference 2. Formula
double forward_acceleration_3points(double h, double x[], int i) {
    return (x[i] - 2*x[i+1] + x[i+2]) / (h*h);
}

//3 Points Backwards Difference 2. Formula
double backward_acceleration_3points(double h, double x[], int i) {
    return (x[i-2] - 2*x[i-1] + x[i]) / (h*h);
}

//3 Points Central Difference 2. Formula
double central_acceleration_3points(double h, double x[], int i) {
    return (x[i-1] - 2*x[i] + x[i+1]) / (h*h);
}

//5 Points Central Difference 2. Formula
double central_acceleration_5points(double h, double x[], int i) {
    return (-x[i-2] + 16*x[i-1] - 30*x[i] + 16*x[i+1] - x[i+2]) / (12*h*h);
}
