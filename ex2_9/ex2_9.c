
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

int main(){
    char *cwd;

    cwd = getcwd(NULL, BUFSIZ);
    if (cwd == NULL) {
        perror("Can't found directory");
        exit(1);
    }
    printf("1.Current Directory: %s\n", cwd);

    chdir("bit");

    cwd = getcwd(NULL, BUFSIZ);
    if (cwd == NULL) {
        perror("Can't found directory");
        exit(1);
    }
    printf("2.Current Directory: %s\n", cwd);

    free(cwd);
}
