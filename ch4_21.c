#include <string.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

int main(){
    FILE *fp;
    int fd;
    char template[32];
    int ret;

    fp = tmpfile();
    fputs("Temp File", fp);
    fclose(fp);

    strcpy(template, "/tmp/hanbitXXXXXX");
    fd = mkstemp(template);
    write(fd, "Temp File", 10);
    close(fd);
}
