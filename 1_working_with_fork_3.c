#include<stdio.h>
#include<unistd.h>

int main(){
    printf("Hello 1: %d\n",getpid());
    fork();
    if(fork() != 0){
        printf("Hello 2: %d\n",getpid());
    }
    return 0;
}