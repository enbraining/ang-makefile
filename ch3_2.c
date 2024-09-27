#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>
#include <stdlib.h>
#include <fcntl.h>
#include <stdio.h>

int main(){
    int fd;
    struct stat statbuf;

    fd = open("linux.txt", O_RDONLY);
    if(fd == -1){
        perror("open: linux.txt");
        exit(1);
    }

    fstat(fd, &statbuf);

    printf("Inode = %d\n", (int) statbuf.st_ino);
    printf("UID = %d\n", (int) statbuf.st_uid);
    close(fd);
}
