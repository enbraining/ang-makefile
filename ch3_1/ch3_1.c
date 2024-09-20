#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>
#include <stdio.h>

int main(){
    struct stat statbuf;

    stat("ch3_1.c", &statbuf);

    printf("Inode = %d\n", (int) statbuf.st_ino);
    printf("Mode = %o\n", (unsigned int) statbuf.st_mode);
    printf("Nlint = %o\n", (unsigned int) statbuf.st_nlink);
    printf("UID = %d\n", (int) statbuf.st_uid);
    printf("GID = %d\n", (int) statbuf.st_gid);
    printf("SIZE = %d\n", (int) statbuf.st_size);
    printf("Blksize = %d\n", (int) statbuf.st_blksize);
    printf("Blocks = %d\n", (int) statbuf.st_blocks);

    printf("** timespec Style\n");
    printf("Atime = %d\n", (int) statbuf.st_atimespec.tv_sec);
    printf("Mtime = %d\n", (int) statbuf.st_mtimespec.tv_sec);
    printf("Ctime = %d\n", (int) statbuf.st_ctimespec.tv_sec);
    printf("** old Style\n");
    printf("Atime = %d\n", (int) statbuf.st_atime);
    printf("Mtime = %d\n", (int) statbuf.st_mtime);
    printf("Ctime = %d\n", (int) statbuf.st_ctime);
}
