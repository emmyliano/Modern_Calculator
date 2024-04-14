#include <stdio.h>
#include <stdlib.h>
/*	 
 	 #include"standard.h"
	 #include"scientific.h"
	 #include"binary.h"

*/

int main()
{
    int mode;
	do{
		printf("============Calculator============");
        printf("\n\n1. Standard(Add, Div, Multi, Sub)\n");
        printf("2. Scientific(tan, cos, sqr root, ... ,)\n");
    	printf("3. Binary Conversion(octa, hexa, deci, ...)\n");
        printf("4. Exit\n\n");
		printf("=============2023============");
 		scanf("%d", &mode);

	}while(mode!=4);
        switch(mode){
            case 1:
                // printf("The switching is working\n");
                break;
            case 2:
                // call scientific calculator
                break;
            case 3:
                // call binary converter
                break;
            case 4:
                return 0;
            default:
                printf("\nInvalid Selection\n");
                //continue;
        }
    return 0;
}
