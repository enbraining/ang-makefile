#include <sys/types.h>
#include <sys/stat.h>
#include <stdio.h>

int main(){
    struct stat statbuf;

    stat("linux.txt", &statbuf);
    printf("Mode = %o\n", (unsigned int) statbuf.st_mode);

    if((statbuf.st_mode & S_IREAD) != 0)
        printf("linux.txt : User has a read permisson\n");

    if((statbuf.st_mode & (S_IREAD >> 3)) != 0)
        printf("linux.txt : Group has a read permission\n");

    if((statbuf.st_mode & S_IROTH) != 0)
        printf("linux.txt : Other have a read permission\n");
}
