#include <stdio.h>

int main() {
  int i;
  int x[6];
  int sum = 0;

  printf("Enter 6 numbers: ");
  for(i = 0; i < 6; ++i) {
      // Equivalent to scanf("%d", &x[i]);
      scanf("%d", x+i);
  }

  for(i = 0; i < 6; ++i) {
      // Equivalent to sum += x[i]
      printf("Addres of (x+%d): %p  value of %d\n", i, x+i, *(x+i));
      sum += *(x+i);
  }
  printf("Sum = %d\n", sum);

  return 0;
}
