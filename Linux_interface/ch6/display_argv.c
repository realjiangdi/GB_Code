#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){
    int i;
    for(i=0;i<argc;i++){
        printf("%s\t",argv[i]);
    }
    printf("\n");
    return 0;
}