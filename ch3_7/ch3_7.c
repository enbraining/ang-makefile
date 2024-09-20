#include <sys/errno.h>
#include <sys/stat.h>
#include <stdio.h>

extern int errno;

int main(){
    struct stat statbuf;

    chmod("ch3_7.c", S_IRWXU | S_IRGRP | S_IXGRP | S_IROTH);

    stat("ch3_7.c", &statbuf);
    printf("1.Mode = %o\n", (unsigned int) statbuf.st_mode);

    statbuf.st_mode |= S_IWGRP;
    statbuf.st_mode &= ~(S_IROTH);

    chmod("ch3_7.c", statbuf.st_mode);
    printf("2.Mode = %o\n", (unsigned int) statbuf.st_mode);
}
