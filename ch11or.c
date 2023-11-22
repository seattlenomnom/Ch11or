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
#include <ctype.h>





/* defines */



/* data structure defines */






/* function declarations */

bool isCorrectLen(char *s, int len);
bool isValidHexNum(char *s);





int main(int argc, char *argv[]) {

    int len = 2, aIndex;


/* are there two arguments? */

    if(argc != 3) {
        printf("ch11or usage: ch11or arg1 arg2.\n");
        exit(0);
   }


/* does each argument have two characters? */

    for(aIndex = 1; aIndex < 3; ++aIndex){
        if(!isCorrectLen(argv[aIndex], len)){
            printf("string length is not correct\n");
            exit(0);
        }
    }




/* is each string a valid hex number? */

    for(aIndex = 1; aIndex < 3; ++aIndex){
        if(!isValidHexNum(argv[aIndex])){
            printf("usage: %s is not a valid hex number.\n", argv[aIndex]);
            exit(0);
        }
    }

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




bool isValidHexNum(char *s){
    bool result;

    int size;

    size = 0;
    result = true;
    for(size = 0; (size < 2) && (result == true); ++size){
        if(isxdigit(s[size])){
            result = true;
        }else{
            result = false;
        }
    }



    return(result);
}








