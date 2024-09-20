#include <sys/types.h>
#include <sys/stat.h>
#include <stdio.h>

int main(){
    struct stat statbuf;
    int kind;

    stat("ch3_3.c", &statbuf);

    printf("Mode = %o\n", (unsigned int) statbuf.st_mode);

    kind = statbuf.st_mode & S_IFMT;
    printf("Kind = %o\n", kind);

    switch(kind){
        case S_IFLNK:
            printf("ch3_3.c: Symbolic Link\n");
            break;
        case S_IFDIR:
            printf("ch3_3.c: Directory\n");
            break;
        case S_IFREG:
            printf("ch3_3.c: Regular File\n");
            break;
    }
}
