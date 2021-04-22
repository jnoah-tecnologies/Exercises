#include <stdlib.h>
#include <stdio.h>

int main() {
  short  x[5] = {1, 2, 3, 4, 5};
  short* ptr;

  system("grep -m1 '{1, 2' sample3.c\n");
  system("grep -m1 'ptr;' sample3.c\n");
  printf("\n");

  printf("sizeof(x): %dByte\n", (int)sizeof(x));
  printf("sizeof(ptr): %dByte\n", (int)sizeof(ptr));
  printf("\n");

  printf("Address of x: %p\n", x);
  printf("Address of ptr: %p\n", &ptr);
  printf("\n");

  // ptr is assigned the address of the third element
  ptr = &x[2]; 

  printf("ptr = &x[2]; \n");
  printf("\n");
  printf("ptr : %p\n", ptr);

  printf("*ptr : %d \n", *ptr);   // 3
  printf("*(ptr + 1) : %d \n", *(ptr + 1)); // 4
  printf("*(ptr - 1) : %d\n", *(ptr - 1));  // 2

  return 0;
}
