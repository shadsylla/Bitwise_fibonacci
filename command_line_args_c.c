#include	<stdio.h> 
#include	<string.h> 
#define		MAXLINE	1000


/* getline function takes 2 arguments and looks for a sepecific 
*  pattern in the string arguments. 
*/
int getline(	char	*line,	int max); 

/* look for: print lines that match pattern form 1st argument */ 
int main( int argc,	char	**argv)
{

		char line[MAXLINE]; 
		int	found	=	0;

		if(argc	!=	2)
				printf("Usage: find pattern \n"); 
		else
				while(getline(line, MAXLINE)	> 0	)
							/* strstr func returns a ptr to of argv[1] in line[1000]*/
					if	(strstr(line, argv[1]) !=	NULL)
					{
						/* print the the whole string line, since line, argv[1] != NULL*/
						printf("%s", line); 
						found++; 
					}

    return found;  // which is how many founds of the target pattern. 

}

/* getline: get line into line, return length*/ 
int getline(char *line, int limit)
{
    int c, i; 

    i = 0;
    while   (--limit  > 0 &&  (c  =   getchar()   )   !=  EOF	&&  c	!=  '\n')
        line[i++]; 
    if (c   ==  '\n')
    {
        line[i++]  =   c; 
    }
    line[i]    =   '\0'; 
    return i; 
    
}/* End of getline fucntion */ 