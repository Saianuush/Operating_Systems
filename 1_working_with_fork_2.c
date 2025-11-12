#include<stdio.h>
#include<unistd.h>

int main(){
    if(fork() || fork()){
        printf("Executing inside if, Process ID: %d\n",getpid());
    }
    fork();
    printf("Executing Outside if, PID: %d\n",getpid());
}