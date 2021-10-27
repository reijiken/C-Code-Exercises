// C program to print the result of multiplication
#include <stdio.h>
int main() {
    int a, b, c, d;
    printf("Enter four integers: ");
    scanf("%d %d %d %d",&a,&b,&c,&d);//Ask the user to input four integers which is lined up with space
    printf("Muliply results = %d",((a-b)*(c+d)));// print result of (a-b)*(c+d)
    return 0;
}
