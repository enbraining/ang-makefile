#include <stdlib.h>
#include <stdio.h>

int main(){
    FILE *rfp, *wfp;
    char buf[BUFSIZ];
    int n;

    if((rfp = fopen("linux.txt", "r")) == NULL){
        perror("fopen: linux.txt");
        exit(1);
    }

    if((wfp = fopen("linux.out", "a")) == NULL){
        perror("fopen: linux.out");
        exit(1);
    }

    while((n = fread(buf, sizeof(char) * 2, 4, rfp)) > 0){
        fwrite(buf, sizeof(char) * 2, n, wfp);
    }

    fclose(rfp);
    fclose(wfp);
}
