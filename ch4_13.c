#include <stdlib.h>
#include <stdio.h>

int main(){
    FILE *rfp;
    char buf[BUFSIZ];
    int n;

    if((rfp = fopen("linux.txt", "r")) == NULL){
        perror("fopen: linux.txt");
        exit(1);
    }

    while((n = fread(buf, sizeof(char) * 2, 4, rfp)) > 0){
        buf[8] = '\0';
        printf("n = %d, buf = %s\n", n, buf);
    }

    fclose(rfp);
}
