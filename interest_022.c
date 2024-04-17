     /* Calculate compound interest(Compound Interest formula:
		a. Formula to calculate compound interest annually is given by:
				= P(1 + R/100)t
		b. Compound Interest = Amount – P*/
		
		
	#include <stdio.h>
	#include <math.h>

 main() 
 {
    float principal, rate, time, amount, compound_interest;

    // Prompt the user to enter principal, rate, and time
    printf("Enter principal amount: ");
    scanf("%f", &principal);
    printf("Enter annual interest rate (in percentage): ");
    scanf("%f", &rate);
    printf("Enter time period (in years): ");
    scanf("%f", &time);

    // Calculate amount using compound interest formula
    amount = principal * pow((1 + rate / 100), time);

    // Calculate compound interest
    compound_interest = amount - principal;

    // Display the result
    printf("\nAmount after compound interest: $%.2f\n", amount);
    printf("Compound Interest: $%.2f\n", compound_interest);

    
}
	
