#include <stdio.h>

int addition(int x, int y);

int main(void)
{
  int add = addition(5,6);
  printf("%d\n", add);

  return 0; // all is well
}

int addition(int x, int y)
{
  int result = x + y;
  return result; 
}
