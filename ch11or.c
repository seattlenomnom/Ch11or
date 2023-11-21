/* Source file for ch11or
 *
 * Input: two 8 bit hex numbers, i.e. a3 c5
 * Output: the bitwise inclusive or of these two 8 bit numbers.
 *
*/

/* include */

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>




/* defines */



/* data structure defines */






/* function declarations */

bool isCorrectLen(char *s, int len);





int main(int argc, char *argv[]) {

    int len = 2;

/* are there two arguments? */

    if(argc != 3) {
        printf("ch11or usage: ch11or arg1 arg2.\n");
        exit(0);
   }


/* does each argument have two characters? */

    if(isCorrectLen(argv[1], len)){
        printf("string length is correct.\n");
    }else{
        printf("string length is incorrect.\n");
    }




/* is each character a hex character? */



/* turn the first hex number into an unsigned integer */





/* turn the second hex number into an unsigned integer */






/* take the inclusive or of the two numbers and print the result as hex */








    return(0);
}

/* function definitions */

bool isCorrectLen(char *s, int len) {
    bool result;

    if(strlen(s) != 2){
        result = false;
    }else{
        result = true;
    }



    return(result);
}
