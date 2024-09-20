#include <sys/stat.h>
#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <errno.h>

int main(){
    if(rmdir("unknown") == - 1){
        perror("Error");
        exit(1);
    }
}
