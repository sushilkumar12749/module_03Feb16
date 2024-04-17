//Convert years into days and months.

#include <stdio.h>

 main() 
 {
    int years, days, months;

    printf("Enter the number of years: ");
    scanf("%d", &years);

    // Calculate months
    months = years * 12;

    // Calculate days (assuming 365 days in a non-leap year)
    days = years * 365;

    // Adjust days for leap years
    days += (years / 4) - (years / 100) + (years / 400);

    // Display the result
    printf("Equivalent: %d years is approximately %d months and %d days.\n", years, months, days);

  }

