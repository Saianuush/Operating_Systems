#include<stdio.h>
#include<unistd.h>

int main(){
    printf("PID of ex1.c = %d\n", getpid());
    char *args[] = {"Hello", "World", NULL};
    execv("./2_working_with_exec_2",args);
    printf("Back to ex1.c");
    return 0;
}
