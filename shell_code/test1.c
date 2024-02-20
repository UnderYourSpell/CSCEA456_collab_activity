#include <stdio.h>
// this code pops a shell
int main (int argc, char *argv[]){
    char *sh;
    char *args[2];
    sh = "/bin/sh";
    args[0] = sh;
    args[1] = NULL;
    execve(sh,args,NULL);
}