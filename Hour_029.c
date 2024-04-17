//Convert minutes into seconds and hours

#include <stdio.h>

 main() 
 {
    int minutes, hours, seconds;

    printf("Enter the number of minutes: ");
    scanf("%d", &minutes);

    // Convert minutes to hours and Seconds
    hours = minutes / 60;     // Calculate hours
    minutes = minutes % 60;   // Calculate remaining minutes

    // Convert hours to seconds
    seconds = hours * 3600;   // Calculate seconds

    // Display the result
    printf("Equivalent: %d hours, %d minutes, and %d seconds.\n", hours, minutes, seconds);

}

