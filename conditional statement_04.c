/*WAP to make simple calculator (operation include Addition, Subtraction, 
Multiplication, Division, modulo) using conditional statement*/

#include <stdio.h>

int main() 
{
    char operator;
    float num1, num2, result;

    printf("Enter an operator (+, -, *, /, %%): ");
    scanf(" %c", &operator);

    // Prompt the user to enter two numbers
    printf("Enter two numbers: ");
    scanf("%f %f", &num1, &num2);

    // Perform operation based on the operator
    switch(operator) 
	{
        case '+':
            result = num1 + num2;
            printf("Sum: %.2f\n", result);
            break;
        case '-':
            result = num1 - num2;
            printf("Difference: %.2f\n", result);
            break;
        case '*':
            result = num1 * num2;
            printf("Product: %.2f\n", result);
            break;
        case '/':
            if (num2 != 0) {
                result = num1 / num2;
                printf("Quotient: %.2f\n", result);
            } else {
                printf("Error! Division by zero.\n");
            }
            break;
        case '%':
            if (num2 != 0) 
			{
                result = (int)num1 % (int)num2; // Modulo operation requires integers
                printf("Modulo: %.2f\n", result);
            } else 
			{
                printf("Error! Division by zero.\n");
            }
            break;
        default:
            printf("Error! Invalid operator.\n");
    }

}

