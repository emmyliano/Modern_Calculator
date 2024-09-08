#include <stdio.h>
#include <stdlib.h>
#include<math.h>

// Function declarations
int stand();
int b_main();
void D2B(); // decimal to binary conversion
void B2D(); // binary to decimal conversion
void square_root();
void square();
void trig();
int scientificMenu();
int scientific_main();


int main()
{
    int mode;
    do {
        printf("============Calculator============\n");
        printf("\n1. Standard(Add, Div, Multi, Sub)\n");
        printf("2. Scientific(tan, cos, sqr root, ... ,)\n");
        printf("3. Binary Conversion(octa, hexa, deci, ...)\n");
        printf("4. Exit\n\n");
        printf("=============2023============\n");
        scanf("%d", &mode);

        switch(mode) {
            case 1:
                stand();
                break;
            case 2:
                scientific_main();
                break;
            case 3:
                b_main();
                break;
            case 4:
                printf("Exiting...\n");
                break;
            default:
                printf("\nInvalid Selection\n");
        }
    } while(mode != 4);

    return 0;
}



// Standard Calculator
int stand()
{
    char operator;
    double num1, num2, result;
    char choice = 'y'; // Initialize choice with 'y'

    while (choice == 'y' || choice == 'Y') {  
        printf("\nPress 'e' to Exit, 'm' to go back to Mode selection\n");
        printf("Enter an operator (+, -, *, /): ");
        scanf(" %c", &operator);

        if (operator == 'e' || operator == 'E') {
            return 0; // Exit the current function to return to the mode selection
        } else if (operator =='m' || operator == 'M') {
            return 0; // Return to mode selection
        }

        printf("\nEnter first number: ");
        scanf("%lf", &num1);
        
        printf("\nEnter second number: ");
        scanf("%lf", &num2);

        switch (operator) {
            case '+':
                result = num1 + num2;
                printf("Result: %.2lf\n", result);
                break;
            case '-':
                result = num1 - num2;
                printf("Result: %.2lf\n", result);
                break;
            case '*':
                result = num1 * num2;
                printf("Result: %.2lf\n", result);
                break;
            case '/':
                if (num2 != 0) {
                    result = num1 / num2;
                    printf("Result: %.2lf\n", result);
                } else {
                    printf("Error: Division by zero\n");
                }
                break;
            default:
                printf("Error: Invalid operator\n");
        }
    }

    return 0; // Return 0 to indicate successful completion
}


// Binary Conversion
int b_main()
{
    int mode, j, k;
    int i = 1;
    int isValid; // ascertain if the user-input is registered; 1 = false, 0 = true

    for (isValid = 1; i <= 4; i++){ // if the user enters an invalid input, this will loop the menu, till input is correct
            int option;

            printf("\nEnter:\n");
            printf("1. Convert Decimal to Binary\n");
            printf("2. Convert Binary to Decimal\n");
            printf("3. Return to main menu\n");
            printf("4. Exit the program\n");
            printf("\n> ");
            scanf("%d", &option);

            switch (option)
            {
                case 1 : D2B(); // calling the function, convert decimal to binary
                    break;

                case 2 : B2D(); // calling the fuction, convert binary to decimal
                    break;

                case 3:
                    system("cls"); // clear the screen
                    continue;
                    // link the main menu here

                case 4: // initiate a direct termination of the program
                    printf("The program has been terminated");
                    return 0;

                default:
                    printf("\nInvalid Selection!\n\n");
                    //continue;
            }
    }

    return 0;
}

void D2B()
{
    long num, i, temp;
    printf("Input a number to find binary code\n ");
    scanf("%ld", &num);
    while(num!=0)
    {
        i = 1;

        while(i<=num/2)
        {
            i = i * 2;
        }

        num = num - i;
        printf("1\n");
        temp = i / 2;

        while(num<temp)
        {
            temp = temp / 2;
            printf("0\n");
        }
    }   
    printf("\n");
}

void B2D()
{ 
    int num, binary_num, decimal_num = 0, base = 1, rem;  
    printf ("\nEnter binary number: ");  
    scanf ("%d", &num); // accept the binary number (0s and 1s)  

    binary_num = num; // assign the binary number to the binary_num variable  


    while ( num > 0)  
    {  
        rem = num % 10; /* divide the binary number by 10 and store the remainder in rem variable. */  
        decimal_num = decimal_num + rem * base;  
        num = num / 10; // divide the number with quotient  
        base = base * 2;  
    }  

   printf ("\n%d(base 2) =\t%d(decimal)\n\n", binary_num, decimal_num); // \t will create a horizontal spacing for emphasis
}




// Scientific Calculator
int scientific_main()
{
    int i;
    char stop;
	for (i = 1; i<= 5; i++){ // This should keep this function running till stop
        if(i >= 2){
            printf("\nInput E to return to mode selection\nPress any other key to continue\n");
            printf("> ");
            scanf("%s", &stop);
            
            if (stop == 'e' || stop == 'E') {
                // link the mode selection here
                return 0;
                // for now return 0 should exit, till we link the mode
            }
        }
        scientificMenu(); // call scientific menu
    }
}


int scientificMenu(){
    int i;
    int isValid = 1;

    for (isValid = 1; i <= 4; i++){ // if the user enters an invalid input, this will loop the menu, till input is correct

        int choice;
        printf("\nInput:\n");
        printf("1. Square root\n");
        printf("2. Square\n");
        printf("3. tan, cos, sin. and it's inverse\n");
        printf("4. Return to main menu\n");
        printf("5. Exit the program\n");
        printf("> ");
        scanf("%d", &choice);

        switch (choice)
        {
            case 1:
                square_root();
                break;
            case 2:
                square();
                break;
            case 3:
                trig();
                break;
            case 4:
                system("cls");
                continue;
            // link the main menu here
            case 5:
                printf("\nThe program has been terminated\n");
                return 0;
            default : 
                printf("\nInvalid Input!\n");
        }

        if (choice == 1 || choice == 2 || choice == 3)
        {
            isValid = 0;
            break; // exit this function, if the choice was correctly chosen and finished calculation
        }
    }
	return 0;
}

void square_root()
{
	double num, result;
	system("cls"); // the <system cls> clears the screen as soon as the square root function is called
	printf("Enter number: ");
	scanf("%lf", &num);
	result = pow(num,0.5);
	printf("The square root of %.2lf ", num);
	printf("is : %.2lf\n", result);
	puts("\n"); // puts is the same as printf lol	
}


void square()
{
	system("cls");// the <system cls> clears the screen as soon as the square function is called
	float num, result;
	printf("Enter number: ");
	scanf("%f", &num);
	result = num * num;
	printf("The square of %.2f ", num);
	printf("is : %.2f\n", result);	
	puts("\n"); //puts is the same as printf lol
}


void trig()
{
    system("cls");
    int select;
    float num, result;
    printf("1. tan\n");
    printf("2. cos\n");
    printf("3. sin\n");
    printf("4. cos inverse\n");
    printf("5. tan inverse\n");
    printf("6. sin inverse\n");
    printf("> ");
    scanf("%d", &select);

    switch(select)
    {
    case 1: // tangent
        printf("Enter number: ");
        scanf("%f", &num);
        result = tan(num);
        printf("tan of %.2f is: %.2f", num, result);
        break;

    case 2: // cosine
        printf("Enter number: ");
        scanf("%f", &num);
        result = cos(num);
        printf("cos of %.2f is: %.2f", num, result);
        break;

    case 3: // sine
        printf("Enter number: ");
        scanf("%f", &num);
        result = sin(num);
        printf("sin of %.2f is: %.2f", num, result);
        break;

    case 4: // cosecant
        printf("Enter number: ");
        scanf("%f", &num);
        result = acos(num);
        printf("cos inverse of %.2f is: %.2f", num, result);
        break;

    case 5: // cot
        printf("Enter number: ");
        scanf("%f", &num);
        result = atan(num);
        printf("tan inverse of %.2f is: %.2f", num, result);
        break;

    case 6: // secant
        printf("Enter number: ");
        scanf("%f", &num);
        result = asin(num);
        printf("sin inverse of %.2f is: %.2f", num, result);
        break;

    default:
        printf("\nInvalid input");
        break;
    }
}