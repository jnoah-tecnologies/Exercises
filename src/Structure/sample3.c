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


struct PACK1 {
	char	data1[3];
	int	data2;
	char	data3;
	short	data4;
};
#pragma pack(push)
#pragma pack(1)
struct PACK2 {
	char	data1[3];
	int	data2;
	char	data3;
	short	data4;
};
#pragma pack(pop)
struct PACK3 {
	char	data1[3];
	int	data2;
	char	data3;
	short	data4;
} __attribute__((__packed__));
struct PACK4 {
	char	data1[3];
	int	data2 __attribute__((aligned(8)));
	char	data3;
	short	data4;
};


int main() {
    {
	struct PACK1	a1 = { {1, 2, 3}, 10, 'A', 30};
	printf("PACK1\n");
	printf("sizeof(a1)=%lu\n", sizeof(a1));
	printf("&a1 = %p\n", &a1);
	printf("&a1,data1[0] = %p\n", &a1.data1[0]);
	printf("&a1.data2 = %p\n", &a1.data2);
	printf("&a1.data3 = %p\n", &a1.data3);
	printf("&a1.data4 = %p\n", &a1.data4);
	dump(&a1, sizeof(a1));
	printf("\n");


	struct PACK2	a2 = { {1, 2, 3}, 10, 'A', 30};
	printf("PACK2\n");
	printf("sizeof(a2)=%lu\n", sizeof(a2));
	printf("&a2 = %p\n", &a2);
	printf("&a2,data1[0] = %p\n", &a2.data1[0]);
	printf("&a2.data2 = %p\n", &a2.data2);
	printf("&a2.data3 = %p\n", &a2.data3);
	printf("&a2.data4 = %p\n", &a2.data4);
	dump(&a2, sizeof(a2));
	printf("\n");

	struct PACK3	a3 = { {1, 2, 3}, 10, 'A', 30};
	printf("PACK3\n");
	printf("sizeof(a3)=%lu\n", sizeof(a3));
	printf("&a3 = %p\n", &a3);
	printf("&a3,data1[0] = %p\n", &a3.data1[0]);
	printf("&a3.data2 = %p\n", &a3.data2);
	printf("&a3.data3 = %p\n", &a3.data3);
	printf("&a3.data4 = %p\n", &a3.data4);
	dump(&a3, sizeof(a3));
	printf("\n");

	struct PACK4	a4 = { {1, 2, 3}, 10, 'A', 30};
	printf("PACK4\n");
	printf("sizeof(a4)=%lu\n", sizeof(a4));
	printf("&a4 = %p\n", &a4);
	printf("&a4,data1[0] = %p\n", &a4.data1[0]);
	printf("&a4.data2 = %p\n", &a4.data2);
	printf("&a4.data3 = %p\n", &a4.data3);
	printf("&a4.data4 = %p\n", &a4.data4);
	dump(&a4, sizeof(a4));
	printf("\n");

    }

}

