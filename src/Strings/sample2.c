#include	<stdlib.h>
#include	<stdio.h>
#include	<strings.h>


// Memory dump
void dump(void* address, int bytes) {
	unsigned char* adr = address;
	if (16 < bytes)
		printf("Dump %dByte\n", bytes);
	for (int i = 0; i < bytes; ++i) {
		if (i % 16 == 0)
			printf("%p : ", adr);
		if (i % 16 == 8)
			printf(" ");
		printf(" %02X", *adr++);

		if (i % 16 == 15)
			printf("\n");
	}
	printf("\n");
}

size_t str_len(char* str) {
	int cnt = 0;
	while (*str++ != '\0') {
		cnt++;
	}
	return cnt;
}

int main(int argc, char** argv) {

	char	c1[] = "012345 ABC あいうえお裏表";

	printf("str_len(c1) = %lu\n", str_len(c1));
	printf("char	c1[] = \"012345 ABC あいうえお裏表\";\n");

	dump(c1, str_len(c1)+1);

}

