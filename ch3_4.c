#include <sys/types.h>
#include <sys/stat.h>
#include <stdio.h>

int main(){
    struct stat statbuf;

    stat("ch3_4.txt", &statbuf);

    printf("Mode = %o\n", (unsigned int) statbuf.st_mode);

    if(S_ISLNK(statbuf.st_mode))
        printf("ch3_4.c : Symbolic Link\n");
    if(S_ISDIR(statbuf.st_mode))
        printf("ch3_4.c : Directory\n");
    if(S_ISREG(statbuf.st_mode))
        printf("ch3_4.c : Regular File\n");
}
