#include<stdio.h>
// #include"../Header_file/binary.h"
void D2B(); // decimal to binary conversion
void B2D(); // binary to decimal conversion

int b_main()
{
   int mode, j, k;
   int i = 1;
   int isValid; // ascertain if the user-input is registered; 1 = false, 0 = true

   for (isValid = 1; i <= 4; i++){ // if the user enters an invalid input, this will loop the menu, till input is correct
      int option;

      printf("Enter:\n");
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