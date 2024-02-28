#include <stdio.h>
#include <string.h>
int main(){
	char inp[8];
	printf("Enter a string of characters to get the length\n");
	gets(inp);
	printf("%ld",strlen(inp));
}
