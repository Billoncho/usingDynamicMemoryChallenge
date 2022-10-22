/*
Author: Billy Gene Ridgeway
Date:   Oct. 21st., 2022
Purpose:    C programming course challenge. Allow user to input a text string.
            The program will print the text that the user inputs.
            The program will use dynamic memory allocation.
            The user can enter the limit of the string they are entering.
            Use this limit when invoking malloc().
            The program should create a char pointer only, no character arrays.
*/

#include<stdio.h>  
#include<string.h> 
#include<stdlib.h>

int main()
{    
    char *str = NULL;       // Create a char pointer.
    int charNum = 0;        // Initalize an int to store the user's string length input.

    printf("\nEnter the number of characters: ");
    scanf("%d", &charNum);
    str = (char*)malloc(charNum*sizeof(char));      // Cast malloc() to char and set the size of the array
                                                    // using the user's input.
      
    if (str != NULL)                                // Ensure that str isn't NULL.
    {                                                
        printf("\n");

        printf("Please enter a string. ");
        scanf("\n");                                    // Use scanf() to clear the last new line character "\n".
        scanf("%[^\n]%*c", str);                        // Receive input and scan for the new line pattern.

        printf("\nYour string is: %s\n", str);
    }
    free(str);                                          // Use free() to release the memory.

    return 0;    
}    