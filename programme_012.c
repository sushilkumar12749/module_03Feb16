//. Program of Armstrong Number in C Using For Loop & While Loop

#include <stdio.h>
#include <math.h>

// Function to calculate the number of digits in a given number
int countDigits(int number) 
{
    int count = 0;
    while (number != 0) 
	{
        count++;
        number /= 10;
    }
    return count;
}

 main() 
 {
    int number, originalNumber, remainder, result = 0, n = 0;

    // Input the number
    printf("Enter a number: ");
    scanf("%d", &number);

    originalNumber = number;

    // Calculate the number of digits
    n = countDigits(number);

    // Calculate the sum of the digits raised to the power of n
    while (originalNumber != 0) 
	{
        remainder = originalNumber % 10;
        result += pow(remainder, n);
        originalNumber /= 10;
    }

    // Check if the number is Armstrong or not
    if (result == number) 
	{
        printf("%d is an Armstrong number.\n", number);
    } else 
	{
        printf("%d is not an Armstrong number.\n", number);
    }

  
}

