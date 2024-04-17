/*WAP to print number in reverse order e.g.: number = 64728 ---> reverse =
82746*/

#include <stdio.h>

 main() 
{
    int number, reverse = 0;

    // Input the number
    printf("Enter a number: ");
    scanf("%d", &number);

    // Reverse the number
    while (number != 0) 
	{
        int remainder = number % 10;
        reverse = reverse * 10 + remainder;
        number /= 10;
    }

    // Print the reversed number
    printf("Reversed number: %d\n", reverse);

    
}

