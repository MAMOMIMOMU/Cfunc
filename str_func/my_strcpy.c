#include "func_table.h"
#include <stdio.h>
#include <string.h>

void my_strcpy(void){
    char str1[] = "abcdefg";
    char str2[] = "123";
    strcpy(str1, str2);
    
    printf("Print str1: %s\n", str1);

    printf("Print all the contents of str1.\n");
    for (int i = 0; i < sizeof(str1); i++){
        printf("%c\n", str1[i]);
    }
}