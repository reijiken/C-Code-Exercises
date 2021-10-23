// C program to print the lowercase of any input letter
#include<stdio.h>
int main()
{
  char c;
  printf("Input an uppercase letter: ");
  scanf("%c",&c);
  char output;
  output = tolower(c);
  printf("Here is the lowercase of input letter: %c",output);
}
