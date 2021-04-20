#include <stdio.h>

void addOne(int* ptr) {
  printf("Address of ptr: %p\n", ptr);
  (*ptr)++; // adding 1 to *ptr
}

int main()
{
  int  i = 10;
  int* p;

  printf("Address of i: %p\n", &i);
  printf("Address of p: %p\n", &p);
  printf("\n");

  p = &i;
  printf("Address of pointer p: %p\n", p);
  addOne(p);

  printf("%d\n", *p); // 11
  return 0;
}
