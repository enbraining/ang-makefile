#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

int main(){
    int fd;

    fd = open("tmp.bbb", O_CREAT | O_WRONLY | O_TRUNC, 0644);
    if(fd == -1){
        perror("Create tmp.bbb");
        exit(1);
    }

    dup2(fd, 1);
    printf("DUP2: Standard Output Redirection\n");

    close(fd);
}
