//Write a program make a summation of given number (E.g., 1523 Ans: -11)

#include <stdio.h>

 main() 
 {
    int number, sum = 0;

    // Input the number
    printf("Enter a number: ");
    scanf("%d", &number);

    // Calculate the summation of digits
    int tempNumber = number < 0 ? -number : number; // Handle negative numbers
    while (tempNumber != 0) 
	{
        sum += tempNumber % 10; // Add the last digit to sum
        tempNumber /= 10; // Remove the last digit
    }

    // If the original number was negative, make the sum negative
    if (number < 0) 
	{
        sum = -sum;
    }

    // Print the summation
    printf("Summation of digits: %d\n", sum);

   
}

