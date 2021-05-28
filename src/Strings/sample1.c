#include	<stdlib.h>
#include	<stdio.h>
#include	<strings.h>

#define		CASE_1

// Memory dump
void dump(void* address, int bytes) {
	char* adr = address;
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

	char	c;
	char	cs = 'A';
	char*	s = &cs;

	printf("char	c;\n");
	printf("char	cs = 'A';\n");
	printf("char*	s = $cs;\n");

	printf("&c(%lu) ", sizeof(c));		dump(&c, sizeof(c));
	printf("&cs(%lu) ", sizeof(cs));	dump(&cs, sizeof(cs));
	printf("&s(%lu) ", sizeof(s));		dump(&s, sizeof(s));
	printf("\n");


	char*	local_p = "abcdefg";
	printf("char*	local_p = \"abcdefg\";\n");

	printf("&local_p(%lu) ", sizeof(local_p)); dump(&local_p, sizeof(local_p));
	printf("local_p(%lu) = %s ", strlen(local_p), local_p); dump(local_p, strlen(local_p)+1);
	printf("\n");

	char	local_d[] = "abcdefg";
	printf("char	local_d[] = \"abcdefg\";\n");
	printf("&local_d(%lu) ", sizeof(local_d)); dump(&local_d, sizeof(local_d));
	printf("local_d(%lu) = %s ", strlen(local_d), local_d); dump(local_d, strlen(local_d)+1);
	printf("\n");

}
