#include <stdio.h>
#include <unistd.h>
#include <errno.h>
#define PATHSIZE 1024

int main(){
    char cwd[PATHSIZE];
    if(getcwd(cwd, sizeof(cwd)) != NULL){
        fprintf(stdout, "%s\n", cwd);
    } else {
        perror("pwd error");
    }
    return 0;
}
