#include <stdio.h>
#include <unistd.h>
#include <sys/wait.h>
int main() {
    if( fork() == 0)
    {
        printf("I am child.\n");
    }
    else
    {
        printf("I am parent.\n");
        wait(NULL);
    }
    return 0;
}
