#include "func_table.h"

#include <stdio.h>
#include <stdlib.h>

#define MAX_STR_LEN 10

void my_malloc(void){
    char* str;
    str = (char *)malloc(sizeof(char)*MAX_STR_LEN);
    if (str == NULL){
        printf("Memory allocation failed!\n");
        exit(0);
    }
    printf("Memory allcation successfull. Type a string (<10): ");
    fgets(str, MAX_STR_LEN, stdin);
    printf("Your input is : %s", str);
    free(str);
}