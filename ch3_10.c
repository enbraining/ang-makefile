#include <sys/errno.h>
#include <sys/stat.h>
#include <unistd.h>
#include <stdio.h>

int main(){
    struct stat statbuf;

    printf("1. stat : linux.txt ---\n");
    stat("linux.txt", &statbuf);
    printf("linux.txt : Link Count = %d\n", (int) statbuf.st_nlink);
    printf("linux.txt : Inode = %d\n", (int) statbuf.st_ino);

    printf("2. stat : linux.sym ---\n");
    stat("linux.sym", &statbuf);
    printf("linux.sym : Link Count = %d\n", (int) statbuf.st_nlink);
    printf("linux.sym : Inode = %d\n", (int) statbuf.st_ino);

    printf("3. stat : linux.sym ---\n");
    lstat("linux.sym", &statbuf);
    printf("linux.sym : Link Count = %d\n", (int) statbuf.st_nlink);
    printf("linux.sym : Inode = %d\n", (int) statbuf.st_ino);
}
