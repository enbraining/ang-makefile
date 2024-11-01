#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>
#include <stdio.h>

int main(){
    FILE *fp;
    int fd, n;
    char str[BUFSIZ];

    fp = fopen("linux.txt", "r");
    if(fp == NULL){
        perror("fopen");
        exit(1);
    }

    fd = fileno(fp);
    printf("fd : %d\n", fd);

    n = read(fd, str, BUFSIZ);
    str[n] = '\0';
    printf("Read : %s\n", str);

    close(fd);
}
