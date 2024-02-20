#include <stdio.h>

void hello(char *tag){
    char inp[16];
    printf("Enter value for %s: ",tag);
    gets(inp);
    printf("Hello your %s is %s\n",tag,inp);
}

int main(int argc,char *argv[]){
    hello(argv[1]);
}

//can easily cauase oveflow here, 16 bytes only
