#include <stdio.h> 
#include <math.h>  //library 


/********************************************************
In this program we will build a function that takes an 
argument from the user and gets it through the formula for 
the fibonacci Sequence. 

Let explain the formula in words and then get into
the mathematical mechanics of it.

Let's suppose N is 5. 

Fib sub N is equal to 1 + the square root of 5 quantity to the power
of N which is 5, then the result divided by 2 to the power of
N which is 5 multiplied by the square root of 5. 
 In clear organized steps: 
 a. (  1    +   √5 )^n  -    (   1   -   √5)^n = x 
 b. x / 2^n √5 will equal to F sub 5 aka: 5 



**********************************************************/

/* 0, 1, 1, 2, 3, 5, 8, 13, 21, .....................



   -  Library functions that were used in this program. 
	 		FUNCTIONs FROM <math.c> library
				- square root of funcitons:
						 [Mathematics] √x = sqrt(x) in 		[Programming]
				-	The pow() function is defined in math.h header file.
						[Mathematics] x^y = pow(x, y) [In programming]


				  The ceil() function 
						a.takes a single argument float, or double. ie: 5.30..
						b. returns the smallest whole number greater or equal to arg
						taken.  side_Note: it is a good func to use as an example to 
						to exaplain artificial neurons. 
				- The floor() function: 
						a. takes a single argument float, or double. i.e: 7.87...
						b. returns the largest number float, or double rounding down 
							7.87.... ----> 7.00
							4.32....-----> 4.00
				   
*/

/*The Main Function*/ 
int main()
{
	// some constantes 
	 const int 	one	= 1; 
	 const int  two = 2; 
	
	//declare user input. note: user inpur will be used as.  
	//So in this case user input has to be a whole number, aka: an Integer. 
	int	user_input; // var 
	
// printf to prompt: 	
printf("The Nth poisiton you wish to look at in the Fibonacci squence: \t\t"); 
	
	// scanf the user input which is user_input; 
	 scanf("%d", &user_input);  // input user 

   
	 double Fib_sub_n_before_division;
	 double Fib_sub_n; 
     const double	five	=	5; 

   // use the the fibonnacci formula 
	 // fibonacci of n_position =
	 // ( one + √5)^n - (one - √5)^n / 2^n * √5
	 // double sqrt( double x), double exp( double x)
	 // double lexp( double x, int )
	 Fib_sub_n_before_division	=	pow( (one	+ sqrt(five)),user_input) - 
	 pow( (one	-	sqrt(five)), user_input	);  

// printf("%lf", Fib_sub_n_before_division); 
	 // second step of the formula 
	//  Fib_sub_n	=	
	//  Fib_sub_n_before_division / (s(two,user_input) * sqrt(five)	); 

   Fib_sub_n	=	
	 Fib_sub_n_before_division / (pow( two, user_input )	*	sqrt(five));  
 
	
	 // Print the target result which depends on the user_input
 printf("Here is the result you wish for: ||||||||=== %lf===|||||||\n", Fib_sub_n); 
  
	return 0; 

}/* End of main*/


// char line[MAXLINE]; 

//     long lineno = 0;
//      int c, execept = 0, number = 0; found = 0; 

//         while(--argc > 0 && (*++argv)[0] == '--')
//             while( c = *++argv[0]) 
//              switch (c)
//              {
//                  case 'x': 
//                   except = 1; 
//                   break; 
//                  case 'n':
//                   number = 1; 
//                   break; 
                 
//              }

//         /* still some code coming*/