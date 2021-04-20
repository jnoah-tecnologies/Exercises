#include <stdio.h>

int main() {
  int  x[5] = {1, 2, 3, 4, 5};
  int* ptr;

  printf("sizeof(x): %dByte\n", (int)sizeof(x));
  printf("sizeof(ptr): %dByte\n", (int)sizeof(ptr));
  printf("\n");

  printf("Address of x: %p\n", x);
  printf("Address of ptr: %p\n", &ptr);
  // ptr is assigned the address of the third element
  ptr = &x[2]; 
  printf("ptr = 0x%p\n", ptr);

  printf("*ptr = %d \n", *ptr);   // 3
  printf("*(ptr+1) = %d \n", *(ptr+1)); // 4
  printf("*(ptr-1) = %d\n", *(ptr-1));  // 2

  return 0;
}
