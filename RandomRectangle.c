// English: C program to print a rectangle of # with input two numbers
// Vietnamese: Chương trình tạo hình chữ nhật thăng
#include<stdio.h>
int main()
{
    int i, j, N, M;
    printf("Enter two numbers: ");
    scanf("%d %d",&N,&M);
    if (N < 0 || M < 0)
    {
        printf("Invalid numbers");
    }
    else
    {
        for (i = 1; i <= M; i++)
        {
            for (j = 1; j <= N; j++)
                printf("#");// You can change the # into another symbol 
            printf("\n");   
        }   
    }
    return 0;
}
