#include <stdio.h>
#include <string.h>

int buffer = 16;

int overflow(char* input1){
    // Ensure length of the input string does not exceed the buffer size
    if(strlen(input1) >= buffer) {
        printf("Error: Input string is too long\n");
        return -1; 
    }
    
    char buff[buffer]; 
    strcpy(buff, input1);
    return 0;
}

int main(int argc, char* argv[]){
    // Check if argument is provided
    if(argc < 2) {
        printf("Usage: %s <input_string>\n", argv[0]);
        return 1; 
    }
    
    // Call  overflow function with provided argument
    if(overflow(argv[1]) != 0) {
        return 1; 
    }

    return 0;
}
