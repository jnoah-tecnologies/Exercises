#include <stdlib.h>
#include <stdio.h>

// Memory dump
void dump(void* address, int bytes) {
    unsigned char* adr = (char*)address;
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

// global
char	g_dim[8];
char	g_str[] ="ABCDEFG";
char	*g_pstr = "012345";

int main() {
	printf("Program\n");
	printf("main = %p\n", main);
    	printf("\n");

	g_str[0] = 'a';

	printf("Global data\n");
	printf("&g_dim[0] = %p\n", &g_dim);
	printf("&g_str[0] = %p\n", &g_str);
	printf("&g_pstr[0] = %p\n", &g_pstr);
	dump(g_dim, sizeof(&g_dim));
	dump(g_str, sizeof(&g_str));
	dump(&g_pstr, sizeof(&g_pstr));
	dump(g_pstr, strlen(g_pstr)+1);
    	printf("\n");


	char	l_dim[8];
	char	l_str[] ="ABCDEFG";
	char	*l_pstr = "012345";
	l_str[0] = 'a';

	printf("Local data\n");
	printf("&l_dim[0] = %p\n", &l_dim);
	printf("&l_str[0] = %p\n", &l_str);
	printf("&l_pstr[0] = %p\n", &l_pstr);
	dump(&l_dim, sizeof(&l_dim));
	dump(&l_str, sizeof(&l_str));
	dump(&l_pstr, sizeof(&l_pstr));
	dump(l_pstr, strlen(l_pstr)+1);
    	printf("\n");


	static char	sl_dim[8];
	static char	sl_str[] ="ABCDEFG";
	static char	*sl_pstr = "012345";
	sl_str[0] = 'a';

	printf("Local static data\n");
	printf("&sl_dim[0] = %p\n", &sl_dim);
	printf("&sl_str[0] = %p\n", &sl_str);
	printf("&sl_pstr[0] = %p\n", &sl_pstr);
	dump(&sl_dim, sizeof(&sl_dim));
	dump(&sl_str, sizeof(&sl_str));
	dump(&sl_pstr, sizeof(&sl_pstr));
	dump(sl_pstr, strlen(sl_pstr)+1);
    	printf("\n");


	const char	cl_dim[8];
	const char	cl_str[] ="ABCDEFG";
	const char	*cl_pstr = "012345";
//	cl_str[0] = 'a';	/* Read only */
//	cl_dim[0] = 'a';	/* Read only */

	printf("Local const data\n");
	printf("&cl_dim[0] = %p\n", &cl_dim);
	printf("&cl_str[0] = %p\n", &cl_str);
	printf("&cl_pstr[0] = %p\n", &cl_pstr);
	dump(&cl_dim, sizeof(&cl_dim));
	dump(&cl_str, sizeof(&cl_str));
	dump(&cl_pstr, sizeof(&cl_pstr));
	dump(cl_pstr, strlen(cl_pstr)+1);
    	printf("\n");


	char*	h_str = malloc(16);
	strcpy(h_str, "ABCDEFG");
	h_str[0] = 'a';

	printf("Local heap data\n");
	printf("h_str = %p\n", h_str);
	dump(h_str, 16);
    	printf("\n");


	free(h_str);
}

