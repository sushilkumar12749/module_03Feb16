 //WAP to calculate swap 2 numbers with using of multiplication and division.
 
 #include <stdio.h>

 main() 
 {
    int num1, num2;

    
    printf("Enter first number: ");
    scanf("%d", &num1);
    printf("Enter second number: ");
    scanf("%d", &num2);

    // Swapping using multiplication and division
    num1 = num1 * num2; // Store the product of num1 and num2 in num1
    num2 = num1 / num2; // Store the quotient of (num1 * num2) / num2 in num2
    num1 = num1 / num2; // Store the quotient of (num1 * num2) / num1 in num1

    // Displaying the swapped numbers
    printf("\nAfter swapping:\n");
    printf("First number: %d\n", num1);
    printf("Second number: %d\n", num2);

    
}

