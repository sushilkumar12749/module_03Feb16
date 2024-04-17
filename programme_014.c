//Accept 5 numbers from user and find those numbers factorials.

#include <stdio.h>


int factorial(int n) 
{
    if (n == 0)
        return 1;
    else
        return n * factorial(n - 1);
}

 main() 
 {
    int numbers[5];
    int i;

    // Accepting 5 numbers from the user
    printf("Enter 5 numbers:\n");
    for (i = 0; i < 5; i++) 
	{
        scanf("%d", &numbers[i]);
    }

    // Calculating and printing factorials
    printf("Factorials:\n");
    for (i = 0; i < 5; i++) 
	{
        printf("%d! = %d\n", numbers[i], factorial(numbers[i]));
    }

    
}

