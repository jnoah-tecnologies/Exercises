#include	<stdlib.h>
#include	<stdio.h>
#include	<strings.h>
#include	<wchar.h>


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



int main(int argc, char** argv) {

	wchar_t	c1[] = L"012345 ABC あいうえお裏表語";

	printf("wcslen(c1) = %lu\n", wcslen(c1));
	printf("wchar_t	c1[] = L\"012345 ABC あいうえお裏表語\";\n");


	dump(c1, sizeof(wchar_t)*(wcslen(c1)+1));

}

