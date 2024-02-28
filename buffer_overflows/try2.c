#include <stdio.h>
#include <string.h>

void hello(char *tag) {
    char inp[16];
    printf("Enter value for %s: ", tag);
    gets(inp);
    printf("Hello, your %s is %s\n", tag, inp);
}

int main(int argc, char *argv[]) {
    hello(argv[1]);

    // Overload inp buffer to cause hello function to run again
    char overflow[32];
    gets(overflow);

    return 0;
}

