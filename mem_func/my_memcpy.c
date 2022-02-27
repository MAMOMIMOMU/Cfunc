#include "func_table.h"
#include <stdio.h>
#include <string.h>

void my_memcpy(void){
    const char src[] = "abcdefghijklmnopqrstuvwxyz";
    char dest[50];

    memcpy(dest, src, sizeof(src));

    printf("src is:  %s\n", src);
    printf("dest is: %s\n", dest);

}