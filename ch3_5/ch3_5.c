#include <sys/types.h>
#include <sys/stat.h>
#include <stdio.h>

int main(){
    struct stat statbuf;

    stat("ch3_5.c", &statbuf);
    printf("Mode = %o\n", (unsigned int) statbuf.st_mode);

    if((statbuf.st_mode & S_IREAD) != 0)
        printf("ch3_5.c : User has a read permisson\n");

    if((statbuf.st_mode & (S_IREAD >> 3)) != 0)
        printf("ch3_5.c : Group has a read permission\n");

    if((statbuf.st_mode & S_IROTH) != 0)
        printf("ch3_5.c : Other have a read permission\n");
}
