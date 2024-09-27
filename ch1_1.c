#include <stdio.h>
#include <unistd.h>
#include <errno.h>

extern int errno;

int main(){
    if(access("text.txt", R_OK) == -1){
        printf("errno = %d\n", errno);
    }
}
