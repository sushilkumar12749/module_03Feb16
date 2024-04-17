  //Accept 5 employees name and salary and count average and total salary
  
  #include <stdio.h>

 main() 
 {
    char names[5][50]; 
    float salaries[5]; 
    float total_salary = 0, average_salary;
    int i;

    // Accepting names and salaries of 5 employees
    for(i = 0; i < 5; i++) {
        printf("Enter name of employee %d: ", i + 1);
        scanf("%s", names[i]);
        printf("Enter salary of employee %d: ", i + 1);
        scanf("%f", &salaries[i]);
        total_salary += salaries[i]; // Calculating total salary
    }

    // Calculating average salary
    average_salary = total_salary / 5;

    // Displaying total and average salary
    printf("\nTotal salary: %.2f\n", total_salary);
    printf("Average salary: %.2f\n", average_salary);

    
}

