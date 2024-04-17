//.Calculate the Sum ofNatural Numbers Using the While Loop

#include <stdio.h>

 main() 
{
    int n;
    int sum = 0;
    int i = 1;

    // Prompt user to enter a positive integer
    printf("Enter a positive integer: ");
    scanf("%d", &n);

    // Validate input
    if (n <= 0) 
	{
        printf("Please enter a positive integer.\n");
        return 1; // Exit with error code
    }

    // Calculate sum of natural numbers from 1 to n
    while (i <= n) 
	{
        sum += i;
        i++;
    }

    // Display the sum
    printf("Sum of natural numbers from 1 to %d is: %d\n", n, sum);

    
}

