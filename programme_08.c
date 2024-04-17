/*Write a program to find out the max from given number (E.g., No: -1562
Max number is 6)*/

#include <stdio.h>

 main() 
 {
    int number, maxDigit = -1; 

    // Input the number
    printf("Enter a number: ");
    scanf("%d", &number);

    // Find the maximum digit
    int tempNumber = number < 0 ? -number : number; 
    while (tempNumber != 0) 
	{
        int digit = tempNumber % 10;
        if (digit > maxDigit) 
		{
            maxDigit = digit;
        }
        tempNumber /= 10;
    }

    // Print the maximum digit
    printf("Max number is %d\n", maxDigit);

    
}

