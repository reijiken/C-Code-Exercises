// C program to compute the factorial of N using recursion
#include <stdio.h>
#include <math.h>
int factorial(int n) // C function factorial with input integer n
{
    if(n == 0)
        return 1;
    else
        return n * factorial(n - 1);
}    
int main() {
    int N;
    printf("Enter a number: ");
    scanf("%d",&N);
    printf("Factorial of input number: %d",factorial(N));
    return 0;
}
