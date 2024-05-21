#include "Q3.h"

int main() {
    
    //Velocity calculations
    printf("Velocity Calculations:\n");
    for (int i = 0; i < n; i++) 
	{
		printf("For point t=%.2f results:\n", t[i]);

        if (i < n-2)
            printf("3 Points Forward difference at t = %.2f: %.2f\n", t[i], forward_difference_3points(h, x, i));
        if (i >1)
            printf("3 Points Backward difference at t = %.2f: %.2f\n", t[i], backward_difference_3points(h, x, i));
        if (i < n-1 && i>0)
            printf("3 Points Central difference at t = %.2f: %.2f\n", t[i], central_difference_3points(h, x, i));
		if (i < n-4)
            printf("5 Points Forward difference at t = %.2f: %.2f\n", t[i], forward_difference_5points(h, x, i));
        if (i < n-2 && i>1)
            printf("5 Points Central difference at t = %.2f: %.2f\n", t[i], central_difference_5points(h, x, i));
		
		printf("\n");
    }

    //Acceleration calculations
    printf("\nAcceleration Calculations :\n");
    for (int i = 0; i < n; i++) 
    {
		printf("For point t=%.2f results:\n", t[i]);

        if (i < n-2)
            printf("3 Points Forward Acceleration at t = %.2f: %.2f\n", t[i], forward_acceleration_3points(h, x, i));
        if (i >1)
            printf("3 Points Backward Acceleration at t = %.2f: %.2f\n", t[i], backward_acceleration_3points(h, x, i));
        if (i < n-1 && i>0)
            printf("3 Points Central Acceleration at t = %.2f: %.2f\n", t[i], central_acceleration_3points(h, x, i));
		if (i < n-2 && i>1)
            printf("5 Points Central Acceleration at t = %.2f: %.2f\n", t[i], central_acceleration_5points(h, x, i));

		printf("\n");
    }

    return 0;
}
