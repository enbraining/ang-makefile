#include <stdio.h>
#include <unistd.h>

int main(int argc, char *argv[]){
    int n;
    extern char *optarg;

    argc == 1 && printf("Arguments:\n  -p\n  -h\n  -n [N]\n");

    while((n = getopt(argc, argv, "phn:")) != -1){
        switch(n){
            case 'p':
                printf("Welcome Linux System Programming!\n");
                break;
            case 'h':
                printf("Arguments:\n  -p\n  -h\n  -n [N]\n");
                break;
            case 'n':
                printf("Nice to meet %s\n", optarg);
                break;
        }
    }
}
