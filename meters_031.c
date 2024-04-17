//Convert kilometers into meters

#include <stdio.h>

 main() 
 {
    float kilometers, meters;

    // Prompt the user to enter the distance in kilometers
    printf("Enter the distance in kilometers: ");
    scanf("%f", &kilometers);

    // Convert kilometers to meters
    meters = kilometers * 1000; // 1 kilometer = 1000 meters

    // Display the result
    printf("%.2f kilometers is equal to %.2f meters.\n", kilometers, meters);

    
}

