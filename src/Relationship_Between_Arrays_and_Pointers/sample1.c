#include <stdio.h>

int main() {
   int x[4];
   int i;

   printf("sizeof(x): %dByte\n", (int)sizeof(x));
   printf("sizeof(x[0]): %dByte\n", (int)sizeof(x[0]));
   printf("\n");


   for(i = 0; i < 4; ++i) {
      printf("&x[%d] = %p\n", i, &x[i]);
   }

   printf("Address of array x: %p\n", x);

   return 0;
}
