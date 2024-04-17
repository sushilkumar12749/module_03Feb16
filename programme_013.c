//calculate the Factorial of a Given Number using while loop

#include <stdio.h>

 main() 
{
    int number;
    unsigned long long factorial = 1; // Use unsigned long long to handle larger factorials
    int originalNumber;

    // Input the number
    printf("Enter a number: ");
    scanf("%d", &number);

    originalNumber = number;

    // Check if the number is negative
    if (number < 0) 
	{
        printf("Error: Factorial is not defined for negative numbers.\n");
    } else {
        // Calculate factorial using a while loop
        while (number > 0) 
		{
            factorial *= number;
            number--;
        }

        // Print the factorial
        printf("Factorial of %d = %llu\n", originalNumber, factorial);
    }

   
}

