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

	char	l_big1[0x100000];
	char	l_big2[0x100000];
	char	l_big3[0x100000];
	char	l_big4[0x100000];
	char	l_big5[0x100000];
	char	l_big6[0x100000];

	printf("&l_big1[0] = %p\n", &l_big1[0]);
	printf("&l_big2[0] = %p\n", &l_big2[0]);
	printf("&l_big3[0] = %p\n", &l_big3[0]);
	printf("&l_big4[0] = %p\n", &l_big4[0]);
	printf("&l_big5[0] = %p\n", &l_big5[0]);
	printf("&l_big6[0] = %p\n", &l_big6[0]);
	printf("\n");


}

