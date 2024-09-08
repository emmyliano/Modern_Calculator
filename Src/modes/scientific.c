#include<stdio.h>
#include<math.h>
#include"scientific.h"
void square_root();
void square();
void trig();
int scientificMenu();
int scientific_main();

int scientific_main()
{
    int i;
    char stop;
	for (i = 1; i<= 5; i++){ // This should keep this function running till stop

        if(i >= 2){
            printf("Input E to return to mode selection\nPress any other key to continue\n");
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
                printf("The program has been terminated");
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
        printf("Invalid input");
        break;
    }
}