#include <sys/errno.h>
#include <sys/stat.h>
#include <unistd.h>
#include <stdio.h>

int main(){
    struct stat statbuf;

    stat("ch3_8.c", &statbuf);
    printf("Before Link Count = %d\n", (int) statbuf.st_nlink);

    link("ch3_8.c", "ch3_8.ln");

    stat("ch3_8.c", &statbuf);
    printf("After Link Count = %d\n", (int) statbuf.st_nlink);
}
