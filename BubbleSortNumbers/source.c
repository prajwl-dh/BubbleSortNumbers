//
//  source.c
//  BubbleSortNumbers
//
//  Created by Prajwal Dhungana on 11/6/20.
//

//declaring libraries
#include <stdio.h>
#include <stdlib.h>

//including the header file
#include "header.h"

//begin of array size function
int sizeOfArray(void)
{
    int arraySize = 0;
    printf("!!!You can enter only positive numbers!!!\n");
    printf("Please enter the quantity of numbers: ");
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
    int swapArrayAsc=0;

    //for-looping for the size of array
    for (i = 0; i <=n-2; i++)
    {
        //nested for-loop for inside elements of the array
        for (j = 0; j <= n-2-i; j++)
        {
            if (Array[j] > Array[j+1])
            {
                //Swap the contents of array
                swapArrayAsc = Array[j];
                Array[j] = Array[j+1];
                Array[j+1] = swapArrayAsc;
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
    int swapArrayDsc=0;

    //for-looping for the size of array
    for (i = 0; i <=n-2; i++)
    {
        //nested for-loop for inside elements of the array
        for (j = 0; j <= n-2-i; j++)
        {
            if (Array[j] < Array[j+1])
            {
                //Swap the contents of array
                swapArrayDsc = Array[j];
                Array[j] = Array[j+1];
                Array[j+1] = swapArrayDsc;
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

