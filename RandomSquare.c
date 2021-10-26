// C program to print a square with # icon
#include <stdio.h>
void square(int n)
{
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            printf("#");
        }
        printf("\n");
    }
}
int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    square(n);
    return 0;
}
