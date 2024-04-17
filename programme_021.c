/*Write a program in C to read any Month Number in integer and display the
number of days for this month.*/

#include <stdio.h>

 main() 
{
    int monthNumber;

    // Input month number
    printf("Enter the month number (1-12): ");
    scanf("%d", &monthNumber);

    // Check if month number is valid
    if (monthNumber < 1 || monthNumber > 12) 
	{
        printf("Invalid month number.\n");
        return 1; // Exit the program with error status
    }

    // Determine the number of days in the month
    switch (monthNumber) {
        case 2:
            printf("Number of days in February: 28 or 29 (leap year)\n");
            break;
        case 4:
        case 6:
        case 9:
        case 11:
            printf("Number of days in this month: 30\n");
            break;
        default:
            printf("Number of days in this month: 31\n");
    }

    
}

