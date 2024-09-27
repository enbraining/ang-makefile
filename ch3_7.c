#include <sys/errno.h>
#include <sys/stat.h>
#include <stdio.h>

extern int errno;

int main(){
    struct stat statbuf;

    chmod("linux.txt", S_IRWXU | S_IRGRP | S_IXGRP | S_IROTH);

    stat("linux.txt", &statbuf);
    printf("1.Mode = %o\n", (unsigned int) statbuf.st_mode);

    statbuf.st_mode |= S_IWGRP;
    statbuf.st_mode &= ~(S_IROTH);

    chmod("linux.txt", statbuf.st_mode);
    printf("2.Mode = %o\n", (unsigned int) statbuf.st_mode);
}
