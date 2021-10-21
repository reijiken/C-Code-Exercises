#include<stdio.h>
#include<string.h>
int main()
{
  char s;
  printf("Enter a letter: ");
  scanf("%c",&s);
  char result;
  result = toupper(s);
  printf("The uppercase: %c", result);
  return 0;
}
