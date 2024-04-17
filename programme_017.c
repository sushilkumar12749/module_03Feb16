/*.Calculate 5 numbers from user and calculate number of even and odd using 
of while loop*/

#include <stdio.h>

 main() 
{
    int count = 0;
    int even_count = 0;
    int odd_count = 0;
    int number;

    printf("Enter 5 numbers:\n");

    while (count < 5) 
	{
        scanf("%d", &number);
        if (number % 2 == 0) 
		{
            even_count++;
        } else {
            odd_count++;
        }
        count++;
    }

    printf("Number of even numbers: %d\n", even_count);
    printf("Number of odd numbers: %d\n", odd_count);

    
}

