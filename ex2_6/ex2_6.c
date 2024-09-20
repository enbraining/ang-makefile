#include <sys/stat.h>
#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>

int main(){
    if(mkdir("dir1", 0755) == -1){
        perror("Can't create 'dir1' directory.");
        exit(1);
    }

    if(mkdir("dir2", 0755) == -1){
        perror("Can't create 'dir2' directory.");
        exit(1);
    }

    if(rmdir("dir1") == - 1){
        perror("Can't remove 'dir1' directory.");
        exit(1);
    }

    if(rename("dir2", "hanbit") == -1){
        perror("Can't rename 'dir2' directory");
        exit(1);
    }
}
