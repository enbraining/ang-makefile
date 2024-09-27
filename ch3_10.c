#include <sys/errno.h>
#include <sys/stat.h>
#include <unistd.h>
#include <stdio.h>

int main(){
    struct stat statbuf;

    printf("1. stat : ch3_10.c ---\n");
    stat("ch3_10.c", &statbuf);
    printf("ch3_10.c : Link Count = %d\n", (int) statbuf.st_nlink);
    printf("ch3_10.c : Inode = %d\n", (int) statbuf.st_ino);

    printf("2. stat : ch3_10.sym ---\n");
    stat("ch3_10.sym", &statbuf);
    printf("ch3_10.sym : Link Count = %d\n", (int) statbuf.st_nlink);
    printf("ch3_10.sym : Inode = %d\n", (int) statbuf.st_ino);

    printf("3. stat : ch3_10.sym ---\n");
    lstat("ch3_10.sym", &statbuf);
    printf("ch3_10.sym : Link Count = %d\n", (int) statbuf.st_nlink);
    printf("ch3_10.sym : Inode = %d\n", (int) statbuf.st_ino);
}
