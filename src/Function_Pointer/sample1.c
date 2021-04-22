#include <stdlib.h>
#include <stdio.h>

int sum (int num1, int num2)
{
    return num1+num2;
}
int main()
{

    /* The following two lines can also be written in a single
     * statement like this: void (*fun_ptr)(int) = &fun;
     */
    int (*f2p) (int, int);

    system("grep -m1 'f2p)' sample1.c");
    printf("\n");

    printf("main function address of : %p\n", main);
    printf("sum function address of : %p\n", sum);
    printf("\n");

    f2p = sum;
    printf("f2p address of : %p\n", &f2p);
    printf("sizeof(f2p) : %dByte\n", (int)sizeof(f2p));
    printf("f2p function address of : %p\n", *f2p);
    printf("\n");

    //Calling function using function pointer
    int op1 = f2p(10, 13);
    printf("int op1 = f2p(10, 13);\n");
    printf("\n");

    //Calling function in normal way using function name
    int op2 = sum(10, 13);
    printf("int op2 = sum(10, 13);\n");
    printf("\n");

    printf("Output1: Call using function pointer: %d",op1);
    printf("\nOutput2: Call using function name: %d\n", op2);
    printf("\n");

    return 0;
}
