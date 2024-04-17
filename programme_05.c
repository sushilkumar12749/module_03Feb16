//WAP to print factorial of given number

#include <stdio.h>

 main() 
{
    int number, i;
    unsigned long long factorial = 1; 
    
    // Input the number
    printf("Enter a number: ");
    scanf("%d", &number);

    // Check if the number is negative
    if (number < 0) 
	{
        printf("Error: Factorial is not defined for negative numbers.\n");
    } else 
	{
        // Calculate factorial
        for (i = 1; i <= number; i++) 
		{
            factorial *= i;
        }

        // Print the factorial
        printf("Factorial of %d = %llu\n", number, factorial);
    }

    
}

