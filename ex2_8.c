#include <sys/stat.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int main() {
    char *cwd, *first_cwd;

    first_cwd = getcwd(NULL, BUFSIZ);
    printf("1. Current directory : %s\n", first_cwd);

    chdir("han");

    cwd = getcwd(NULL, BUFSIZ);
    printf("2. Current directory : %s\n", cwd);

    chdir(first_cwd);
    printf("3. Current directory : %s\n", first_cwd);

    free(cwd);
    free(first_cwd);

    return 0;
}
