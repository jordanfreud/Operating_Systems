/*-------------------------------------------------------------------------*
 *---									---*
 *---		main.c							---*
 *---									---*
 *---	    This file defines the functions getNextNumber(),		---*
 *---	obtainNumberBetween() and main() needed for the program of	---*
 *---	assignment 1.							---*
 *---									---*
 *---	----	----	----	----	----	----	----	----	---*
 *---									---*
 *---	Version 1a		2017 January 2		Joseph Phillips	---*
 *---									---*
 *-------------------------------------------------------------------------*/

#include	"header.h"


//  PURPOSE:  To hold the lowest allowed random number. 
;int		low=RANGE_LOWEST;


//  PURPOSE:  To hold the highest allowed random number. 
int		high=RANGE_HIGHEST;

const char*	descriptionCPtr=" number in the range";

//  PURPOSE:  To return another randomly-generated number.
int		getNextNumber	()
{
  return( (rand() % (high - low + 1)) + low );
}



//  PURPOSE:  To repeatedly ask the user the text "Please enter ", followed
//	by the text in 'descriptionCPtr', followed by the numbers 'low' and
//	'high', and to get an entered integer from the user.  If this entered
//	integer is either less than 'low', or is greater than 'high', then
//	the user is asked for another number.  After the user finally enters
//	a legal number, this function returns that number.

int		obtainNumberBetween
				(const char*	descriptionCPtr,
				 int   		low,
				 int		high
				)
{
  char	line[MAX_LINE];
  int	entry;
  char *ptr;
  
      
  do {
  
    printf("Please enter a %s %d %d \n", descriptionCPtr, low, high);
    fgets(line, MAX_LINE, stdin );
    int   entry = atoi(line); 
     
    
    if(ptr==line)
      printf("try again with an integer\n");
    else  
      printf("Value: %d  \n",entry);
  } while(entry>high || entry<low );
  
  return entry;
}


//  PURPOSE:  To use the function obtainNumberBetween() to obtain the values
//  	for global variable 'low' (which must be between RANGE_LOWEST and
//  	 RANGE_HIGHEST), global variable 'high' (which must be between 'low'
//  	 and RANGE_HIGHEST), and local variable 'numNum' (which must be between
//  	 MIN_NUM_NUMBERS and MAX_NUM_NUMBERS).
//  	 Then it enters a loop asking the user what they want to do.  If the
//  	 user chooses integer 1 then the program runs countWithList(numNums).
//  	 If the user chooses integer 2 then the program runs
//  	 countWithTree(numNums).  If the user chooses 0 then the program quits.
//  	 Returns 'EXIT_SUCCESS' to OS.
int		main		()
{
 char	array[MAX_LINE];
 
 int numNum=obtainNumberBetween(descriptionCPtr,low,high);
 
 int	numNums=1000000;
 
  
  const char*	msgCPtr	= "What would you like to do?\n"
			  "(1) Count with a list\n"
			  "(2) Count with a tree\n"
			  "(0) Quit\n"
			  "Your choice ";
 printf("%s",msgCPtr);
 fgets(array, MAX_LINE, stdin );
 int choice=atoi(array);

 while(1) {
   if(choice==1)
       countWithList(numNums);
   else if (choice==2)
       countWithTree(numNums);
   else
       return(EXIT_SUCCESS);

}
}
	  
