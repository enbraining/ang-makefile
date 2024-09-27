#include <stdio.h>
#include <stdlib.h>

extern int subnum(int a, int b);

int main(int argc, char *argv[]){
    int n, sub, x = atoi(argv[1]), y = atoi(argv[2]);
    sub = subnum(x, y);
    printf("%d - %d = %d\n", x, y, sub);
}
