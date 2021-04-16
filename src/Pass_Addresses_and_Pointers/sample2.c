#include <stdio.h>

void addOne(int* ptr) {
  (*ptr)++; // adding 1 to *ptr
}

int main()
{
  int  i = 10;
  int* p;

  p = &i;
  addOne(p);

  printf("%d\n", *p); // 11
  return 0;
}
