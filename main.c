#include <stdio.h>
#include <stdlib.h>
#include "func_table.h"

extern STDFunc f[];

// Refer to https://qiita.com/hikarabitagobou/items/39c0e636455783a2463c
int main(int argc, char* argv[]){

    int n = 0;
    if (argc != 2){
        printf("One argument must be specified.\n");
        return 0;
    }
    n = atoi(argv[1]);

    (*f[n])();
    // printf("%d\n", n);

    return 0;
}