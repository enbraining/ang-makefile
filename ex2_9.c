
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <errno.h>
#include <string.h>

int main(){
    char *cwd;

    cwd = getcwd(NULL, BUFSIZ);
    if (cwd == NULL) {
        perror("Error");
        exit(1);
    }
    printf("1.Current Directory: %s\n", cwd);

    if (chdir("bit") == -1) {
        perror("Error");
        exit(1);
    }

    cwd = getcwd(NULL, BUFSIZ);
    if (cwd == NULL) {
        perror("");
        exit(1);
    }
    printf("2.Current Directory: %s\n", cwd);

    free(cwd);
}
