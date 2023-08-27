#include <stdio.h> 
/*
* This program take in arguments for the main function, and
* it will take them in the terminal. 
* Instructions:
*   1. argc is argument or parameters count, or how many arguments
*			are getting in the program. This is an integer data type. 
*		2. argv is argument vector, which is a pointer to an array of 
*   	 character strings. Or, a pointer to a beginning of an array
* 		of various arrays of characters, aka strings. 
*		
*			ON	TERMINAL write:  
*						gcc command_line_args_b.c -o command_line_args 
*           ./command_line_args ta xiang yao he shui
*
*      OUTPUT: -------------------------------------------
*         |
          |   ta!!!!xiang!!!!yao!!!!he!!!!shui!!
          |
*         |-----------------------------------------------
*         
*     The words are after ./command_line_args_b  are the optional args.  
*/
/* VERSION NUMBER 2.*/
/*Main func, here but I am changing the arg names*/
int main(int a_count, char **a_vector)
{
    /*args count will start at max, then decrease until it is at 0 index */
    while(--a_count > 0)
    {
        /* print 2 things:  
          a. The content of an address where the string argument is.
          b. If arg count is  greater than 1 print "!!!!", 
            else 
            "!!" */ /* a pointer to an incrementing by 1 * ++a_vector */
        printf("%s%s", *++a_vector, (a_count  > 1) ?  "!!!!"  : "!!"); 
        printf("%s%s", *++a_vector, (a_count  > 1) ?  "===="  "===="); 

        /*Alternatively, we could write the same as:     */
        printf((a_count > 1)  ? "%s"  : "%s", *++a_vector); 
          
    }
    
    printf("\n.\n"); 

    earth pt[2]; 

    pt[1].ammount_population = "10,000,000"; 
    pt[1].countries          = "Portugal"; 
  return 0; 
} /* End of main function*/ 


/*

   Inventing my own data type which can be used to access specific information inside that 
   data type. 
*/

typedef struct
{
  char *countries; 
  int  ammount_population; 
} earth;  /* this is a tructure, which it will have elements just real life. when a room is built 
it has 1. 4 walls, 2. a certain amount of tubes connected to treatment facility,
3. a certain amount of tubes connected to the sewage treatment plant, 4. Amount of cables and electric components and so on..


