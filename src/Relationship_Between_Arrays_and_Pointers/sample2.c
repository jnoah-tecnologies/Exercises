#include <stdlib.h>
#include <stdio.h>

int main() {
  int i;
  short x[6] = {1, 2, 3, 4, 5, 6};
  int sum = 0;

//  printf("int x[6] = {1, 2, 3, 4, 5, 6};\n");
  system("grep -m1 '{1, 2' sample2.c");
  printf("\n");

  for (i = 0; i < 6; ++i) {
      // Equivalent to sum += x[i]
      printf("Addres of (x+%d): %p  value of %d\n", i, x+i, *(x+i));
      sum += *(x+i);
  }
  printf("Sum = %d\n", sum);

  return 0;
}
