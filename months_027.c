//Convert days into months

#include <stdio.h>

 main() 
 {
    int days, months, remaining_days;

    printf("Enter the number of days: ");
    scanf("%d", &days);

    // Convert days to months and remaining days
    months = days / 30;         // Assuming 30 days per month
    remaining_days = days % 30; // Get the remaining days

    // Display the result
    printf("Equivalent: %d months and %d days\n", months, remaining_days);

}

