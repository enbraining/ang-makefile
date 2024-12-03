#include <unistd.h>
#include <stdio.h>

int main(){
    printf("PID: %d\n", (int)getpid());
    printf("PGID: %d\n", (int)getpgid());
    printf("SID: %d\n", (int)getsid(0));
}