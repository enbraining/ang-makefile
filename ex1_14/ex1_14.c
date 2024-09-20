#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){
    int n, x = atoi(argv[1]), y = atoi(argv[2]), result = 0;
    extern char *optarg;

    for(; x <= y; result += x++);
    result != 0 && printf("%d\n", result);
}
