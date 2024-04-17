#include <stdio.h>

 main() 
{
    float length, width, perimeter;
    
    // Input length and width of the rectangle
    printf("Enter length of the rectangle: ");
    scanf("%f", &length);
    printf("Enter width of the rectangle: ");
    scanf("%f", &width);
    
    // Calculate perimeter
    perimeter = 2 * (length + width);
    
    // Display the perimeter
    printf("Perimeter of the rectangle = %.2f\n", perimeter);
    
}

