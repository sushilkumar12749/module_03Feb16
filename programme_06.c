//WAP to print Fibonacci series up to given numbers

#include <stdio.h>

 main() 
{
    int limit, i;
    unsigned long long first = 0, second = 1, next;

    // Input the limit
    printf("Enter the limit: ");
    scanf("%d", &limit);

    printf("Fibonacci series up to %d:\n", limit);

    printf("%llu, %llu, ", first, second);

    // Generate and print the remaining terms of the Fibonacci series
    for (i = 3; i <= limit; i++) 
	{
        next = first + second;
        printf("%llu, ", next);
        first = second;
        second = next;
    }

    printf("\n");

    
}

