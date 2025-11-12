#include<stdio.h>
#include<unistd.h>

int main(){
    fork();
    fork();
    printf("Hello World\nProcess ID : %d\n",getpid());
}