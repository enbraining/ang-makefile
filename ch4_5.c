#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

int main(){
    int rfd, wfd, n;
    char buf[10];

    rfd = open("linux.txt", O_RDONLY);
    if(rfd == -1){
        perror("Open linux.txt");
        exit(1);
    }

    wfd = open("linux.bak", O_CREAT | O_WRONLY | O_TRUNC, 0644);
    if(wfd == -1){
        perror("Open linux.bak");
        exit(1);
    }

    while((n = read(rfd, buf, 6)) > 0){
        if(write(wfd, buf, n) != n) perror("Write");
    }

    if(n == -1) perror("Read");

    close(rfd);
    close(wfd);
}
