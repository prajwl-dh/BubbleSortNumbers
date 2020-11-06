//
//  main.c
//  BubbleSortNumbers
//
//  Created by Prajwal Dhungana on 11/6/20.
//

//declaring libraries
#include <stdio.h>
#include <stdlib.h>

//including the header file
#include "header.h"

//beginning of main
int main(int argc, const char * argv[])
{
    
    //declaring some important variables
    int choice = 0;
    int arraySizeAsc = 0;
    int arraySizeDsc = 0;
    
    //beginning of while infinite loop
    while (1)
    {
        
        //User Choice Selection Part
        printf("*********************************************\n");
        printf("         Welcome to Bubble Sorting           \n");
        printf("*********************************************\n");
        printf("Please select your choice: \n");
        printf("1. Bubble Sorting in Ascending Order\n");
        printf("2. Bubble Sorting in Descending Order\n");
        printf("3. Close the program.\n");
        printf("*********************************************\n");
        printf("Please enter your choice: ");
        scanf(" %d", &choice);
        
        //Using switch-case for user input
        switch (choice) {
            case 1:
            {
                //Ascending Order Part
                arraySizeAsc= sizeOfArray();
                int ArrayAsc[arraySizeAsc];
                userInput(ArrayAsc, arraySizeAsc);
                printf("\nThe numbers you entered are: \n");
                print_array(ArrayAsc, arraySizeAsc);
                printf("\n");
                bubble_sortAsc(ArrayAsc, arraySizeAsc);
                printf("The numbers arranged in Ascending order: \n");
                print_array(ArrayAsc, arraySizeAsc);
                printf("\n\n");
                break;
            }
                
            case 2:
            {
                //Descending Order Part
                arraySizeDsc= sizeOfArray();
                int ArrayDsc[arraySizeDsc];
                userInput(ArrayDsc, arraySizeDsc);
                printf("\nThe numbers you entered are: \n");
                print_array(ArrayDsc, arraySizeDsc);
                printf("\n");
                bubble_sortDsc(ArrayDsc, arraySizeDsc);
                printf("The numbers arranged in Descending order: \n");
                print_array(ArrayDsc, arraySizeDsc);
                printf("\n\n");
                break;
            }
                
            case 3:
            {
                //Exit the program
                printf("\nThanks for using the program.\n");
                printf("Program closed successfully.\n");
                return EXIT_SUCCESS;
            }
                
            default:
            {
                //Error Checking for user input
                printf("\nYou entered a wrong option.\n");
                printf("Please try again.\n");
                break;
            }
                
        }//end switch
    }
    //end of while infinite loop
    
    return 0;
}
//end of main
