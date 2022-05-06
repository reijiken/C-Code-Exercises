// C program calculate factorial using for loop
#include<stdio.h>
int factorial(int n) // sample function
{
    int res = 1, i;
    for(i = 2; i<=n; i++){
        res *= i;
    }
    return res;
}
int main(){ // Main function
    int N;
    printf("Enter the number: ");
    scanf("%d",&N);
    printf("Factorial of %d is %d",N,factorial(N));
    return 0;
}
