/*Write a program you have to make a summation of first and last Digit. (E.g.,
1234 Ans: -5)*/

#include <stdio.h>

 main() 
 {
    int number, firstDigit, lastDigit, sum;

    // Input the number
    printf("Enter a number: ");
    scanf("%d", &number);

    // Extract the last digit
    lastDigit = number % 10;

    // Determine the number of digits in the number
    while (number >= 10) 
	{
        number /= 10;
    }

    // The remaining value of 'number' is the first digit
    firstDigit = number;

    // Calculate the summation
    sum = firstDigit + lastDigit;

    // Print the summation
    printf("Summation of first and last digits: %d\n", sum);

    
}

