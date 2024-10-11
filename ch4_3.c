#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

int main(){
    int fd;

    close(0);

    fd = open("test.txt", O_RDWR);
    if(fd == -1){
        perror("Open");
        exit(1);
    }

    printf("test.txt : fd = %d\n", fd);
    close(fd);
}
