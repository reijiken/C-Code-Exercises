// Online C compiler to run a repeated letter n times
#include <stdio.h>

int main() {
    // Write C code here
    int i, count;
    char c;
    printf("Enter the letter you want: ");
    scanf("%c",&c);
    printf("Enter the number you want to repeat the letter: ");
    scanf("%d",&count);
    for(i = 1; i <= count; i++)
    {
        printf("%c", c);   
    }
    return 0;
}
