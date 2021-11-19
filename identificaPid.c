#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

int main(){
    printf("Prima della fork");
    int pid;
    printf("Il processo corrente ha pid: %d", getpid());
    pid=fork();
    printf("Dopo la fork");
    if(pid==0){
        printf("Solo il figlio, il mio pid è: %d", getpid());
        exit(0);
    }
    else{
        printf("Solo il padre, il mio pid è: %d", getpid());
        exit(1);
    }
    return 0;
}