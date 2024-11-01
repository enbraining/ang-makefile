#include <fcntl.h>
#include <stdlib.h>
#include <stdio.h>

int main(){
    FILE *fp;
    int fd;
    char str[BUFSIZ];

    fd = open("linux.txt", O_RDONLY);
    if(fd == -1){
        perror("open");
        exit(1);
    }

    fp = fdopen(fd, "r");

    fgets(str, BUFSIZ, fp);
    printf("Read : %s\n", str);

    fclose(fp);
}
