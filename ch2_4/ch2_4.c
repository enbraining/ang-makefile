#define _GNU_SOURCE
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

int main(){
    char *cwd;

    cwd = get_current_dir_name();
    printf("cwd = %s\n", cwd);
    free(cwd);
}
