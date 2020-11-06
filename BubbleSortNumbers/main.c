//
//  main.c
//  BubbleSortNumbers
//
//  Created by Prajwal Dhungana on 11/6/20.
//

//declaring libraries
#include <stdio.h>
#include <stdlib.h>

//declaring functions
void bubble_sortAsc(int Array[], int n);
void bubble_sortDsc(int Array[], int n);
void print_array(int Array[], int n);
void userInput(int Array[], int n);
int sizeOfArray(void);

//beginning of main
int main(int argc, const char * argv[]) {
    
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
                arraySizeAsc= sizeOfArray();
                int ArrayAsc[arraySizeAsc];
                userInput(ArrayAsc, arraySizeAsc);
                printf("The numbers you entered are: \n");
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
                arraySizeDsc= sizeOfArray();
                int ArrayDsc[arraySizeDsc];
                userInput(ArrayDsc, arraySizeDsc);
                printf("The numbers you entered are: \n");
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
                printf("\nThanks for using the program.\n");
                printf("Program closed successfully.\n");
                return EXIT_SUCCESS;
            }
                
            default:
            {
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


//begin of array size function
int sizeOfArray(void)
{
    int arraySize = 0;
    printf("Please enter the size of the array: ");
    scanf(" %d", &arraySize);
    printf("Enter %d numbers followed by a space after each numbers: \n", arraySize);
    return arraySize;
}
//end of array size function



//begin of arrayinput function
void userInput(int Array[], int n)
{
    //taking input and storing it in the array using for loop
    for (int i = 0; i < n; i++)
    {
        scanf(" %d", &Array[i]);
    }
    //finished taking the user input
}
//end of userinput function


//begin bubble_sortAsc function
void bubble_sortAsc(int Array[], int n)
{
    //declaring necessary variables
    int i=0;
    int j=0;
    int swapArray=0;

    //for-looping for the size of array
    for (i = 0; i <=n-2; i++)
    {
        //nested for-loop for inside elements of the array
        for (j = 0; j <= n-2-i; j++)
        {
            if (Array[j] > Array[j+1])
            {
                //Swap the contents of array
                swapArray = Array[j];
                Array[j] = Array[j+1];
                Array[j+1] = swapArray;
            }
            
        }//end nested loop
        
    }//end for loop
    
}//end bubble_sortAsc function


//begin bubble_sortDsc function
void bubble_sortDsc(int Array[], int n)
{
    //declaring necessary variables
    int i=0;
    int j=0;
    int swapArray=0;

    //for-looping for the size of array
    for (i = 0; i <=n-2; i++)
    {
        //nested for-loop for inside elements of the array
        for (j = 0; j <= n-2-i; j++)
        {
            if (Array[j] < Array[j+1])
            {
                //Swap the contents of array
                swapArray = Array[j];
                Array[j] = Array[j+1];
                Array[j+1] = swapArray;
            }
            
        }//end nested loop
        
    }//end for loop
    
}//end bubble_sortDsc function


//begin print_array Function
void print_array(int Array[], int n)
{
    for (int i = 0; i <= n-1; i++)
    {
        printf(" %d", Array[i]);
    }
}//end print_array function

