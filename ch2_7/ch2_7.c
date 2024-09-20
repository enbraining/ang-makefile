#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

int main(){
    char *cwd;
    int fd;

    cwd = getcwd(NULL, BUFSIZ);
    printf("1.Current Directory: %s\n", cwd);

    fd = open("bit", O_RDONLY);
    fchdir(fd);

    cwd = getcwd(NULL, BUFSIZ);
    printf("2.Current Directory: %s\n", cwd);

    close(fd);
    free(cwd);
}
