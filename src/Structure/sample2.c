#include <stdlib.h>
#include <stdio.h>

// Memory dump
void dump(void* address, int bytes) {
    unsigned char* adr = address;
    printf("Dump %dByte\n", bytes);
    for (int i = 0; i < bytes; ++i) {
        if (i % 16 == 0) {
            printf("%p : ", adr);
        }
        if (i % 16 == 8) {
            printf(" ");
        }
        printf(" %02X", *adr++);

        if (i % 16 == 15) {
            printf("\n");
        }
    }
    printf("\n");
}




int main() {
    {
	struct s_2 {
		char	c1;
		int	num1;
		int	num2;
	};
	struct s_3 {
		int	num1;
		char	c1;
		int	num2;
	};
	struct s_4 {
		int	num1;
		int	num2;
		char	c1;
	};

	struct s_2	s2 = {'A', 10, 20};
	struct s_3	s3 = {10, 'A', 20};
	struct s_4	s4 = {10, 20, 'A'};

	printf("default align\n");
	printf("\n");

	// s_2
	printf("sizeof(s2)=%lu\n", sizeof(s2));
	printf("&s2 = %p\n", &s2);
	printf("&s2.c1 = %p\n", &s2.c1);
	printf("&s2.num1 = %p\n", &s2.num1);
	printf("&s2.num2 = %p\n", &s2.num2);
	dump(&s2, sizeof(s2));
	printf("\n");


	// s_3
	printf("sizeof(s3)=%lu\n", sizeof(s3));
	printf("&s3 = %p\n", &s3);
	printf("&s3.num1 = %p\n", &s3.num1);
	printf("&s3.c1 = %p\n", &s3.c1);
	printf("&s3.num2 = %p\n", &s3.num2);
	dump(&s3, sizeof(s3));
	printf("\n");

	// s_4
	printf("sizeof(s4)=%lu\n", sizeof(s4));
	printf("&s4 = %p\n", &s4);
	printf("&s4.num1 = %p\n", &s4.num1);
	printf("&s4.num2 = %p\n", &s4.num2);
	printf("&s4.c1 = %p\n", &s4.c1);
	dump(&s4, sizeof(s4));
	printf("\n");
    }
    {
	struct s_2 {
		char	c1;
		int	num1;
		int	num2;
	} __attribute__((__packed__));
	struct s_3 {
		int	num1;
		char	c1;
		int	num2;
	} __attribute__((__packed__));
	struct s_4 {
		int	num1;
		int	num2;
		char	c1;
	} __attribute__((__packed__));

	struct s_2 	s2 = {'A', 10, 20};
	struct s_3 	s3 = {10, 'A', 20};
	struct s_4 	s4 = {10, 20, 'A'};

	printf("1Byte aligned\n");
	printf("\n");

	// s_2
	printf("sizeof(s2)=%lu\n", sizeof(s2));
	printf("&s2 = %p\n", &s2);
	printf("&s2.c1 = %p\n", &s2.c1);
	printf("&s2.num1 = %p\n", &s2.num1);
	printf("&s2.num2 = %p\n", &s2.num2);
	dump(&s2, sizeof(s2));
	printf("\n");


	// s_3
	printf("sizeof(s3)=%lu\n", sizeof(s3));
	printf("&s3 = %p\n", &s3);
	printf("&s3.num1 = %p\n", &s3.num1);
	printf("&s3.c1 = %p\n", &s3.c1);
	printf("&s3.num2 = %p\n", &s3.num2);
	dump(&s3, sizeof(s3));
	printf("\n");

	// s_4
	printf("sizeof(s4)=%lu\n", sizeof(s4));
	printf("&s4 = %p\n", &s4);
	printf("&s4.num1 = %p\n", &s4.num1);
	printf("&s4.num2 = %p\n", &s4.num2);
	printf("&s4.c1 = %p\n", &s4.c1);
	dump(&s4, sizeof(s4));
	printf("\n");
    }


}

