// C program to print sum from 1 to n(n is input number)
#include <stdio.h>

int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    if (n == 0)
    {
        printf("sum = 0");
    }
    else if (n == 1)
    {
        printf("sum = 1");
    }
    else
    {
        int sum = 0;
        for (int i = 1; i <= n; i++)
        {
            sum = sum + i;
        }
        printf("Sum from 1 to %d is %d",n,sum);
    }
    return 0;
} 
