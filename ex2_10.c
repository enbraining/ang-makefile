#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <dirent.h>

int main(){
    int fd;

    if(mkdir("test", 0755) == -1){
        perror("Can't create 'test' directory.");
        exit(1);
    }

    fd = open("test", O_RDONLY);
    fchdir(fd);

    while((dent = readdir(dp))){
        printf("Name : %s ", dent->d_name);
        printf("Inode : %d\n", (int)dent->d_ino);
    }
}
