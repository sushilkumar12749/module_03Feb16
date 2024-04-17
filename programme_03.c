/*WAP to take 10 no. Input from user find out below values
a. How many Even numbers are there
b. How many odd numbers are there
c. Sum of even numbers
d. Sum of odd numbers*/

#include <stdio.h>

 main() 
{
    int numbers[10];
    int i, evenCount = 0, oddCount = 0, sumEven = 0, sumOdd = 0;

    // Input 10 numbers from the user
    printf("Enter 10 numbers:\n");
    for (i = 0; i < 10; i++) 
	{
        printf("Number %d: ", i + 1);
        scanf("%d", &numbers[i]);

        // Check if the number is even or odd
        if (numbers[i] % 2 == 0) 
		{
            evenCount++;
            sumEven += numbers[i];
        } else 
		{
            oddCount++;
            sumOdd += numbers[i];
        }
    }

    // Display the results
    printf("\nResults:\n");
    printf("a. Number of even numbers: %d\n", evenCount);
    printf("b. Number of odd numbers: %d\n", oddCount);
    printf("c. Sum of even numbers: %d\n", sumEven);
    printf("d. Sum of odd numbers: %d\n", sumOdd);

    
}

