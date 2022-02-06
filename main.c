#include <stdio.h>

int main(){
#if defined (EEMBCAD)
    int a = 8;
#else
    int a = 4;
#endif

    printf("%d\n", a);

}