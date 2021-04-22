#include <stdlib.h>
#include <stdio.h>

int main()
{
   int  c;
   int*  pc;

   system("grep -m1 'c;' sample2.c");
   system("grep -m1 'pc;' sample2.c");
   printf("\n");

   printf("sizof(c): %dByte\n", (int)sizeof(c));
   printf("sizof(pc): %dByte\n", (int)sizeof(pc));
   printf("\n");
   
   c = 22;
   printf("c = 22;\n");
   printf("\n");
   printf("Address of c: %p\n", &c);
   printf("Value of c: %d\n", c);  // 22
   printf("\n");
   
   pc = &c;
   printf("pc = &c;\n");
   printf("\n");
   printf("Address of pc: %p\n", &pc);
   printf("Address of pointer pc: %p\n", pc);
   printf("Content of pointer pc: %d\n", *pc); // 22
   printf("\n");
   
   c = 11;
   printf("c = 11;\n");
   printf("\n");
   printf("Address of pointer pc: %p\n", pc);
   printf("Content of pointer pc: %d\n", *pc); // 11
   printf("\n");
   
   *pc = 2;
   printf("*pc = 2;\n");
   printf("\n");
   printf("Address of c: %p\n", &c);
   printf("Value of c: %d\n", c); // 2
   printf("\n");

   return 0;
}
