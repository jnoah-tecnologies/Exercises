#include <stdlib.h>
#include <stdio.h>

int main() {
   int x[4];

   system("grep -m1 'x' sample1.c");
   printf("\n");

   printf("sizeof(x): %dByte\n", (int)sizeof(x));
   printf("sizeof(x[0]): %dByte\n", (int)sizeof(x[0]));
   printf("\n");


   for(int i = 0; i < 4; ++i) {
      printf("&x[%d] : %p\n", i, &x[i]);
   }

   printf("\n");
   printf("Address of array x: %p\n", x);

   return 0;
}
