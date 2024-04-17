// Find circumference of square formula : C = 4 * a

#include <stdio.h>

float square_circumference(float side) 
{
    return 4 * side;
}

 main() 
{
    float side;

    // Input the length of the side of the square
    printf("Enter the length of the side of the square: ");
    scanf("%f", &side);

    // Calculate circumference
    float circumference = square_circumference(side);

    // Display the circumference
    printf("The circumference of the square is: %.2f\n", circumference);

    
}

