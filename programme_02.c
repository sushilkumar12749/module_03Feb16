//WAP to accept 5 numbers from user and display all numbers

#include <stdio.h>

 main() 
{
    int numbers[5];
    int i;

    // Input 5 numbers from the user
    printf("Enter 5 numbers:\n");
    for (i = 0; i < 5; i++) 
	{
        printf("Number %d: ", i + 1);
        scanf("%d", &numbers[i]);
    }

    // Display all the numbers
    printf("Numbers entered by the user:\n");
    for (i = 0; i < 5; i++) 
	{
        printf("%d ", numbers[i]);
    }
    printf("\n");

    
}

