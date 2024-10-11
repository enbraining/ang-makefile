#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

int main(){
    int fd;
    mode_t mode;

    mode = S_IRUSR | S_IWUSR | S_IRGRP | S_IROTH;

    fd = open("test.txt", O_CREAT, mode);
    if(fd == - 1){
        perror("Creat");
        exit(1);
    }
    close(fd);
}
