#include <sys/errno.h>
#include <sys/stat.h>
#include <unistd.h>
#include <stdio.h>

int main(){
    struct stat statbuf;

    stat("linux.txt", &statbuf);
    printf("Before Link Count = %d\n", (int) statbuf.st_nlink);

    link("linux.txt", "linux.ln");

    stat("linux.txt", &statbuf);
    printf("After Link Count = %d\n", (int) statbuf.st_nlink);
}
