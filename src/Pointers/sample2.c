#include <stdio.h>
int main()
{
   int  c;
   int*  pc;
   printf("sizof(c): %dByte\n", (int)sizeof(c));
   printf("sizof(pc): %dByte\n", (int)sizeof(pc));
   printf("\n");
   
   c = 22;
   printf("Address of c: %p\n", &c);
   printf("Value of c: %d\n", c);  // 22
   printf("\n");
   
   pc = &c;
   printf("Address of pc: %p\n", &pc);
   printf("Address of pointer pc: %p\n", pc);
   printf("Content of pointer pc: %d\n", *pc); // 22
   printf("\n");
   
   c = 11;
   printf("Address of pointer pc: %p\n", pc);
   printf("Content of pointer pc: %d\n", *pc); // 11
   printf("\n");
   
   *pc = 2;
   printf("Address of c: %p\n", &c);
   printf("Value of c: %d\n", c); // 2
   printf("\n");

   return 0;
}
