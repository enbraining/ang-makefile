#include <sys/stat.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int main() {
    char *cwd, *first_cwd;

    first_cwd = getcwd(NULL, 0);
    printf("1. Current position : %s\n", first_cwd);

    chdir("han");

    cwd = getcwd(NULL, 0);
    printf("2. Current position : %s\n", cwd);

    chdir(first_cwd);
    printf("3. Current position : %s\n", first_cwd);

    free(cwd);
    free(first_cwd);

    return 0;
}
