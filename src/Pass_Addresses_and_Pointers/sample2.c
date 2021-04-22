#include <stdlib.h>
#include <stdio.h>

void addOne(int* ptr) {
  printf("Address of ptr: %p\n", ptr);
  printf("\n");

  (*ptr)++; // adding 1 to *ptr

  printf("(*ptr)++;\n");
  printf("\n");
}

int main()
{
  int  i = 10;
  int* p;

  system("grep -m1 'i = ' sample2.c");
  system("grep -m1 'p;' sample2.c");
  printf("\n");
  printf("Address of i: %p\n", &i);
  printf("Address of p: %p\n", &p);
  printf("\n");

  p = &i;
  printf("p = &i;\n");
  printf("\n");

  printf("Address of pointer p: %p\n", p);
  printf("\n");

  printf("addOne(p);\n");
  printf("\n");

  addOne(p);

  printf("*p: %d\n", *p); // 11
  printf("i: %d\n", i); // 11

  return 0;
}
