// C program calculate factorial using while loop
#include<stdio.h>
int factorial(int n)
{
    if(n == 0)
        return 1;
    int fact = 1, i = n;
    while(n / i != n){
        fact = fact * i;
        i--;
    }
    return fact;
}
int main(){
    int N;
    printf("Enter the number: ");
    scanf("%d",&N);
    printf("Factorial of %d is %d",N,factorial(N));
    return 0;
}
