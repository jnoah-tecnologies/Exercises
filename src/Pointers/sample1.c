#include <stdlib.h>
#include <stdio.h>

int main()
{
  int var = 1000;

  system("grep -m1 'var ' sample1.c");
  printf("\n");

  printf("sizeof(var): %dByte\n", (int)sizeof(var));
  printf("\n");

  printf("var: %d = 0x%X\n", var, var);

  // Notice the use of & before var
  unsigned char* cvarp = (unsigned char*)&var;
  for (int i = 0; i < sizeof(var); i++) {
    printf("address of var: %p  DATA: %02X\n", &cvarp[i], cvarp[i]);  
  }

  return 0;
}
