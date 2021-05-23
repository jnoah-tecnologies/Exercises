#include	<stdlib.h>
#include	<stdio.h>
#include	<strings.h>


// Memory dump
void dump(void* address, int bytes) {
	char* adr = (char*)address;
	if (16 < bytes)
		printf("Dump %dByte\n", bytes);
	for (int i = 0; i < bytes; ++i) {
		if (i % 16 == 0)
			printf("%p : ", adr);
		if (i % 16 == 8)
			printf(" ");
		printf(" %02X", (unsigned char)*adr++);

		if (i % 16 == 15)
			printf("\n");
	}
	printf("\n");
}



int main(int argc, char** argv) {

	char	c1[] = "012345 ABC あいうえお裏表";

	printf("strlen(c1) = %lu\n", strlen(c1));
	printf("char	c1[] = \"012345 ABC あいうえお裏表\";\n");

	dump(c1, strlen(c1)+1);

}

