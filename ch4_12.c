#include <stdlib.h>
#include <stdio.h>

int main(){
    FILE *rfp, *wfp;
    char buf[BUFSIZ];

    if((rfp = fopen("linux.txt", "r")) == NULL){
        perror("fopen: linux.txt");
        exit(1);
    }

    if((wfp = fopen("linux.out", "a")) == NULL){
        perror("fopen: linux.out");
        exit(1);
    }

    while((c = fgetc(rfp)) != EOF){
        fputc(c, wfp);
    }

    fclose(rfp);
    fclose(wfp);
}
