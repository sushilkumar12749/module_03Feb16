/*Accept monthly salary from the user and deduct 10% insurance premium, 
  10% loan installment find out of remaining salary.*/
  
  #include <stdio.h>

 main() 
 {
    float salary, insurance, loan, remaining_salary;

    // Prompt the user to enter monthly salary
    printf("Enter your monthly salary: ");
    scanf("%f", &salary);

    // Calculate insurance premium (10%)
    insurance = 0.1 * salary;

    // Calculate loan installment (10%)
    loan = 0.1 * salary;

    // Calculate remaining salary
    remaining_salary = salary - insurance - loan;

    // Display the results
    printf("\nSalary: $%.2f\n", salary);
    printf("Insurance Premium (10%%): $%.2f\n", insurance);
    printf("Loan Installment (10%%): $%.2f\n", loan);
    printf("Remaining Salary: $%.2f\n", remaining_salary);

    
}

