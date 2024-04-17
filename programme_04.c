//WAP to print table up to given numbers

#include <stdio.h>

 main() 
 {
    int number, i, j;

    printf("Enter the number: ");
    scanf("%d", &number);

    // Print the multiplication table up to the given number
    for (i = 1; i <= number; i++) 
	{
        printf("Multiplication table for %d:\n", i);
        for (j = 1; j <= 10; j++) {
            printf("%d * %d = %d\n", i, j, i * j);
        }
        printf("\n"); // Add a newline after each table
    }

    
}

