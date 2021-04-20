#include <stdio.h>
int main()
{
  int var = 1000;

  printf("sizeof(var): %dByte\n", (int)sizeof(var));
  printf("\n");

  printf("var: %d = 0x%X\n", var, var);

  // Notice the use of & before var
  unsigned char* cvarp = (unsigned char*)&var;
  printf("address of var: %p  DATA: %02X\n", &cvarp[0], cvarp[0]);  
  printf("address of var: %p  DATA: %02X\n", &cvarp[1], cvarp[1]);  
  printf("address of var: %p  DATA: %02X\n", &cvarp[2], cvarp[2]);  
  printf("address of var: %p  DATA: %02X\n", &cvarp[3], cvarp[3]);  

  return 0;
}
