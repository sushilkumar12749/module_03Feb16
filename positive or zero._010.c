//WAP to check whether a number is negative, positive or zero.

#include <stdio.h>

 main() 
 {
    int num;

    // Input number from user
    printf("Enter a number: ");
    scanf("%d", &num);

    // Check if the number is negative
    if (num < 0)
        printf("%d is a negative number.\n", num);
    // Check if the number is positive
    else if (num > 0)
        printf("%d is a positive number.\n", num);
    // If not negative or positive, it must be zero
    else
        printf("The number is zero.\n");

    
}

