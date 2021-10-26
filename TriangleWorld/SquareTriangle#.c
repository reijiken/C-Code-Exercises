// C program to print a special square triangle with # icon
#include <stdio.h>
void squareTriangle(int n)
{
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < i + 1; j++)
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
    squareTriangle(n);
    return 0;
}
