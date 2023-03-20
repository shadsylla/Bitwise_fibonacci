#include <stdio.h> 
/*
* This program take in arguments for the main function, and
* it will take them in the terminal. 
* Instructions:
*   1. argc is argument or parameters count, or how many arguments
*			are getting in the program. This is an integer data type. 
*		2. argv is argument vector, which is a pointer to an array of 
*   	 character strings. Or, a pointer to an array of elements zero 
* 		of various arrays of characters, aka strings. 
*		
*			ON	TERMINAL: 
*						gcc command_line_args.c -o command_line_args 
➜           ./command_line_args wo xihuan putaoya
*/


int main(int argc, char **argv)
{
    int i; 
  
    for(i = 0;  i < argc; i++) /* this i will increase the arg vector*/
    {
        /* a. Print the argument after argument vector[0].
           b. then print " " or "" depending on arg count - 1 cmp index. 
        */ 
      printf("%s%s", argv[i], (i < argc-1)  ? " " : ""); 
        printf("%d\n", argc-1);
  

    }
    /* print end of line */
    printf("\n\n"); 

  return 0; 
}/* end of main function. */