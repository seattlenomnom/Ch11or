/* Source file for ch11or
 *
 * Input: two 8 bit hex numbers, i.e. a3 c5
 * Output: the bitwise inclusive or of these two 8 bit numbers.
 *
*/

/* include */

#include <stdio.h>
#include <stdlib.h>




/* defines */





/* data structure defines */






/* function declarations */







int main(int argc, char *argv[]) {

/* are there two arguments? */

    if(argc != 3) {
        printf("ch11or usage: ch11or arg1 arg2.\n");
        exit(0);
   }


/* does each argument have two characters? */



/* is each character a hex character? */



/* turn the first hex number into an unsigned integer */





/* turn the second hex number into an unsigned integer */






/* take the inclusive or of the two numbers and print the result as hex */








    return(0);
}

/* function definitions */
