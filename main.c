// #include	<stdio.h> 

// /*
// 	BITWISE OPERATORS = special operators tecniques are used in 
// 			bit level programming(knowing some binary 
// 			is essential for this topic)


//  	& = AND 
// 	| = OR
// 	^ = XOR
// 	<< left shift 
// 	>> right shift
		
//  I'll create a function for each operator. 
// 	1. AND operator function
// 	2. OR 
// 	3. XOR operator function 
// 	4. Left shift 
// 	5. Right shift function
// */
//  /* function right shift */ 
// int right_shift(int x, int y, int z); 

// /*Funtion prototype left_shift*/
// int left_shift(int x, int y, int z);  

// /* main function */ 
// int main(int agrc, char* argv[])
// {

// 	/*Let's create some variables */

// 	int a = 6; //   6 = 00000110
// 	int b = 12; // 12 = 00001100
// 	int z = 0;  // 0  = 00000000

// 	/*AND op*/ 	
// 	z = a & b;

// 	printf(" AND operator: %d\n ", z); 

// 	/*OR operator*/
// 	z = a | b; 

// 	printf(" OR operator: %d\n", z);

// 	/*XOR operator */
// 	z = a ^ b; 
// 	printf(" XOR operator: %d\n", z); 



// 	/*Right Shift operator */
// 	z = a >> 1; 
// 	printf("Right Shift : %d\n", z);

// 	z = a >> 2;
// 	printf("Right Shift :%d\n", z);


// 	/*Left shift operator */

// 	z = a << 3;
// 	printf(" Left Shift: %d\n", z); 

// 	int x = 10, y =	100, e = 0; 
// 	/*right_shift function*/
// 	right_shift(x,y,e);

// 	x = 10, y = 1, e = 0;

// 	/*Left_shift functioin*/
// 	left_shift(x,y,e); 

// 	return 0; 
// 	}/* End of main func */ 


// /* function right shift */
// int right_shift(int x, int y, int z)
// {
// 	int idx = 0;  
	
// 	for( ; idx < x;idx++)
// 	{
// 		z = y >> idx; 
// 		printf(" This is Right shift: %d\n",z); 
		
// 	} /*End of for loop*/
// 	printf(" The last z %d\n", z);
// 	return z; 

// } /*End of right_shift function*/ 

// /*End of function right shift*/
// int left_shift( int x, int y, int z)
// {
// 	int idx = 0; 
	
// 	for( ; idx < x; idx++)
// 	{
// 		z = y << idx; 
// 		printf(" left_shift: %d\n", z); 
// 	}/*end of for loop*/

// 	printf(" Last z : %d\n", z); 
// 	return z;  
// } /*End function left_shift*/
