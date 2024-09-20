#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

int main(){
    if(rmdir("han") == - 1){
        perror("han");
        exit(1);
    }
}
