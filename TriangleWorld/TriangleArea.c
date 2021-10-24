#include <stdio.h>
#include <math.h>
int main() {
    int a, b, c;
    printf("Enter three numbers: ");
    scanf("%d %d %d",&a,&b,&c);
    if (a < 0 || b < 0 || c < 0)
    {
        printf("Invalid numbers");
    }
    else{
        double S;
        float p;
        p = (a + b + c) / 2;
        S = sqrt(p * (p - a) * (p - b) * (p - c));
        printf("Area of %d %d %d is %lf",a,b,c,S);
    }
    
    return 0;
}
