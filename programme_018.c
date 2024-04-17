#include <stdio.h>

 main() 
{
    int N;
    
    // Prompt the user to enter the number
    printf("Enter a number to print its multiplication table: ");
    scanf("%d", &N);

    // Print the multiplication table
    printf("Multiplication table of %d:\n", N);
    for (int i = 1; i <= 10; ++i);
	{
        printf("%d * %d = %d\n", N, i, N * i);
    }

    
}

