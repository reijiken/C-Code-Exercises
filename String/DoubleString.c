//C program print two same string as you input a string
#include <stdio.h>
int main() {
    char s[1000];
    printf("Enter a string: ");
    gets(s);
    printf("%s %s",&s,&s);
    return 0;
} 
