#include <stdio.h>
#include <conio.h>

int main()
{
  int a,b,temp;
  printf("Enter value of a: ");//a=10
  scanf("%d", &a);
  printf("Enter value of b: ");//b=20
  scanf("%d", &b);
  temp=a;
  a=b;
  b=temp;
  printf("\nAfter swapping a: %d, b: %d",a,b);
  return 0;
}