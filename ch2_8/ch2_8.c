#include <stdio.h>
#include <stdlib.h>
#include <dirent.h>

int main(){
    DIR *dp;
    struct dirent *dent;

    dp = opendir(".");

    while((dent = readdir(dp))){
        printf("Name : %s ", dent->d_name);
        printf("Inode : %d\n", (int)dent->d_ino);
    }

    closedir(dp);
}
