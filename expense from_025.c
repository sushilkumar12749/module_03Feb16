 //Accept 5 expense from user and find average of expense.
 
 #include <stdio.h>

 main() 
 {
    float expenses[5]; 
    float total_expense = 0, average_expense;
    int i;

    // Accepting expenses from the user
    printf("Enter 5 expenses:\n");
    for(i = 0; i < 5; i++) {
        printf("Expense %d: ", i + 1);
        scanf("%f", &expenses[i]);
        total_expense += expenses[i]; // Calculating total expense
    }

    // Calculating average expense
    average_expense = total_expense / 5;

    // Displaying average expense
    printf("\nAverage expense: %.2f\n", average_expense);

    
}

