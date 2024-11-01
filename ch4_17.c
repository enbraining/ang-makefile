#include <stdlib.h>
#include <stdio.h>

int main(){
    FILE *fp;
    int n;
    long cur;
    char buf[BUFSIZ];

    if((fp = fopen("linux.txt", "r")) == NULL){
        perror("fopen: linux.txt");
        exit(1);
    }

    cur = ftell(fp);
    printf("Offset cur = %d\n", (int) cur);

    n = fread(buf, sizeof(char), 5, fp);
    buf[n] = '\0';
    printf("-- Read Str = %s\n", buf);

    fseek(fp, 1, SEEK_CUR);

    cur = ftell(fp);
    printf("Offset cur = %d\n", (int) cur);

    n = fread(buf, sizeof(char), 6, fp);
    buf[n] = '\0';
    printf("-- Read Str = %s\n", buf);

    fseek(fp, 1, SEEK_CUR);

    cur = ftell(fp);
    printf("Offset cur = %d\n", (int) cur);

    n = fread(buf, sizeof(char), 11, fp);
    buf[n] = '\0';
    printf("-- Read Str = %s\n", buf);

    rewind(fp);
    cur = ftell(fp);
    printf("Rewind Offset cur = %d\n", (int) cur);

    fclose(fp);
}
