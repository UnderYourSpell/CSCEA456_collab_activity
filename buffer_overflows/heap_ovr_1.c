//example of a heap overflow
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

#define password "password"

checkpw(){
    char pw[100]; //give pw a 100 byte buffer
    printf("Please enter the password: ");
    gets(pw); //unsafe gets function -> no size argument
    if (strcmp(pw, password) == 0) //compare pw to password, if 0, match
        granted();
    else
        printf("Access denied\n");
}

granted() {
    printf("Access granted\n");
    return 0;
}

int main(int argc, char* argv[]){ //v0 
    setuid(1000);
    if(argc > 1){ //argument entered, don't accept, we don't have args
            printf("There is no usage\n");
 	return 1;
    }
    checkpw();
    return 0;
}
