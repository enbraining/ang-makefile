#include <stdio.h>
#include <stdlib.h>
#include <dirent.h>

int main(){
    DIR *dp;
    struct dirent *dent;
    long loc;

    dp = opendir(".");

    printf("Start position : %ld\n", telldir(dp));
    while((dent = readdir(dp))){
        printf("Read : %s -> ", dent->d_name);
        printf("Cur Position : %ld\n", telldir(dp));
    }

    printf("** Directory Position Rewind **\n");
    rewinddir(dp);
    printf("Cur Position : %ld\n", telldir(dp));

    printf("** Move Directory Rewind **\n");
    readdir(dp);
    loc = telldir(dp);
    seekdir(dp, loc);
    printf("Cur Position : %ld\n", telldir(dp));

    dent = readdir(dp);
    printf("Read : %s\n", dent->d_name);

    closedir(dp);
}
