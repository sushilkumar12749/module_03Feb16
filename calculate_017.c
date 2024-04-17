//Calculate person’s insurance premium based on salary

#include <stdio.h>

float calculatePremium(float salary, float percentage) 
{
    return (salary * percentage) / 100.0;
}

 main() 
 {
    float salary, percentage, premium;

    // Input salary from the user
    printf("Enter the person's salary: $");
    scanf("%f", &salary);

    // Input the percentage for premium
    printf("Enter the percentage for insurance premium: ");
    scanf("%f", &percentage);

    // Calculate the insurance premium
    premium = calculatePremium(salary, percentage);

    // Display the insurance premium
    printf("The insurance premium for a salary of $%.2f at %0.2f%% is: $%.2f\n", salary, percentage, premium);

    
}

