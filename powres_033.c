//C Program to Read Integer and Print First Three Powers (N^1, N^2, N^3)

#include <stdio.h>

 main() 
 {
    int num, power1, power2, power3;

    printf("Enter an integer: ");
    scanf("%d", &num);

    // Calculate the first three powers
    power1 = num;       // N^1
    power2 = num * num; // N^2
    power3 = num * num * num; // N^3

    // Display the first three powers
    printf("First power: %d\n", power1);
    printf("Second power: %d\n", power2);
    printf("Third power: %d\n", power3);

    
}

