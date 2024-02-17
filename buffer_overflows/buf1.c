//test program
#include <stdio.h>
#include <string.h>


int overflow(char* input1){
    char buff[16]; //stack buffer of 16 bytes
    strcpy(buff,input1);
    return 0;
}

void main(int argc, char* argv[]){
    overflow(argv[1]);
}

// ./a.out `python -c 'print "A" * 32'` as example input to cause overflow
