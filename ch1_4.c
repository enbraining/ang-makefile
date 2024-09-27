#include <stdio.h>
#include <unistd.h>
#include <errno.h>
#include <stdlib.h>

int main(){
    if(access("text.txt", R_OK) == -1){
        perror("test.txt");
        exit(1);
    }
}
