#include <sys/errno.h>
#include <unistd.h>
#include <stdio.h>

extern int errno;

int main(){
    int perm;

    if(access("linux.bak", F_OK) == -1 && errno == ENOENT)
        printf("linux.bak: File not exist.\n");

    perm = access("linux.txt", R_OK);

    if(perm == 0)
        printf("linux.txt: Read permission is permmitted.\n");
    else if(perm == -1 && errno == EACCES)
        printf("linux.txt: Read permission is not permmitted");
}
