#include<stdio.h>
#include<unistd.h>

int main(){
    fork();
    
    fork();
    printf("\nHello World\nProcess ID : %d\n",getpid());
    printf("\n2 , Process ID: %d\n",getpid());
}