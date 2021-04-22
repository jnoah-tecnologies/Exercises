#include <stdlib.h>
#include <stdio.h>


void swap(int* n1, int* n2)
{
    printf("n1: %p\n", n1);
    printf("n2: %p\n", n2);

    int temp;

    printf("Address of temp: %p\n", &temp);
    printf("\n");

    temp = *n1;
    *n1 = *n2;
    *n2 = temp;
}

int main()
{
    int num1 = 5, num2 = 10;

    system("grep -m1 'num1 =' sample1.c");
    printf("\n");

    printf("Address of num1: %p\n", &num1);
    printf("Address of num2: %p\n", &num2);
    printf("\n");

    // address of num1 and num2 is passed
    printf("swap( &num1, &num2);\n");
    printf("\n");

    swap( &num1, &num2);

    printf("num1 = %d\n", num1);
    printf("num2 = %d\n", num2);

    return 0;
}

