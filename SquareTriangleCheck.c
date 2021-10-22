// C program to check if three input numbers are parts of a square triangle
#include <stdio.h>
int main() {
    int a, b, c;
    printf("Enter three numbers: ");
    scanf("%d %d %d",&a,&b,&c);
    if(a*a + b*b == c*c || a*a + c*c == b*b || b*b + c*c == a*a)
        printf("YES");
    else 
        printf("NO");
    return 0;
}
