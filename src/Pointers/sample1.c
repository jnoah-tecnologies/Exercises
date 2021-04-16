#include <stdio.h>
int main()
{
  int var = 1000;
  printf("var: %d\n", var);
  printf("sizeof(var): %ld\n", sizeof(var));

  // Notice the use of & before var
  printf("address of var: %p  ", &var);  
  printf("DATA: %02X %02X %02X %02X\n", 
    *((unsigned char*)&var+0), *((unsigned char*)&var+1), *((unsigned char*)&var+2), *((unsigned char*)&var+3));
  return 0;
}
