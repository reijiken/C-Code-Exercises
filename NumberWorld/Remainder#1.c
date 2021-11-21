// C compiler to get remainder of a * b * c * d % mod
#include<stdio.h>
int main() {
    int a, b, c, d, mod, r;
    printf("Enter five numbers: \n");
    scanf("%d %d %d %d %d",&a,&b,&c,&d,&mod);
    r = (a * b * c * d) % mod;
    printf("remainder = %d",r);
    return 0;
}
