#include "func_table.h"
#include <stdio.h>
#include <string.h>


// Refer to http://www9.plala.or.jp/sgwr-t/lib/strtok.html
void my_strtok(void){
    // My string to tokenize
    // char* str = "This is my strtok function.";
    // The declaration above causes a bus error because str will become constant.
    // Refer to https://stackoverflow.com/questions/41021149/bus-error10-with-strtok-in-c

    char str[] = "This is my strtok function.";
    
    char* str_ptr;
    // Tokenize str by a space
    str_ptr = strtok(str, " ");
    puts(str_ptr);

    while(str_ptr != NULL){
        str_ptr = strtok(NULL, " ");
        if (str_ptr != NULL) puts(str_ptr);
    }

}