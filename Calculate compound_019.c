//Calculate compound interest

#include <stdio.h>
#include <math.h>

 main() 
{
    float principal, rate, time, compound_interest;
    int n;

    // Input principal amount
    printf("Enter principal amount: ");
    scanf("%f", &principal);

    // Input annual interest rate
    printf("Enter annual interest rate (in percentage): ");
    scanf("%f", &rate);

    // Input time in years
    printf("Enter time in years: ");
    scanf("%f", &time);

    // Input number of times interest is compounded per year
    printf("Enter the number of times interest is compounded per year: ");
    scanf("%d", &n);

    // Convert annual interest rate from percentage to decimal
    rate = rate / 100;

    // Calculate compound interest
    compound_interest = principal * pow(1 + rate / n, n * time) - principal;

    // Display the compound interest
    printf("Compound interest = $%.2f\n", compound_interest);

   
}

