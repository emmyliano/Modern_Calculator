#include <stdio.h>
#include <stdlib.h>
void standard();

void standard( ) {
    char operator;
    double num1, num2, result;
    char choice = 'y'; // Initialize choice with 'y'

    while (choice == 'y' || choice == 'Y')
     {  
        printf("press 'e' to exit, 'm' to go back to mode selection ");
        printf("\n\n");
        printf("Enter an operator: ");
        scanf(" %c", &operator);

        if (operator == 'e' || operator == 'E') {
            break; // Exit the program if 'e' is pressed
        }
        else if (operator =='m' || operator == 'M') {
            break;  // it doesn't work at the moment because we haven't linked it
            // main ( );
        }

        printf("Enter first number: ");
        scanf("%lf", &num1);
        
        printf("Enter second number: ");
        scanf("%lf", &num2);

        switch (operator) {
            case '+':
                result = num1 + num2;
                printf("Result: %lf\n", result);
                break;
            case '-':
                result = num1 - num2;
                printf("Result: %lf\n", result);
                break;
            case '*':
                result = num1 * num2;
                printf("Result: %lf\n", result);
                break;
            case '/':
                if (num2 != 0) {
                    result = num1 / num2;
                    printf("Result: %lf\n", result);
                } else {
                    printf("Error: Division by zero\n");
                }
                break;
            default:
                printf("Error: Invalid operator\n");
        }
    }
}