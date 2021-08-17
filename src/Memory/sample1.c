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
char	g_str[] ="ABCDEF";
char	*g_pstr = "012345";

int main() {
	printf("Program\n");
	printf("main = %p\n", main);
    	printf("\n");

	g_str[0] = 'a';

	printf("Global data\n");
	printf("&g_dim[0] = %p\n", &g_dim[0]);
	printf("&g_str[0] = %p\n", &g_str[0]);
	printf("&g_pstr = %p\n", &g_pstr);
	dump(&g_dim[0], sizeof(g_dim));
	dump(&g_str[0], sizeof(g_str));
	dump(&g_pstr, sizeof(g_pstr));
	dump(g_pstr, strlen(g_pstr)+1);
    	printf("\n");


	char	l_dim[8];
	char	l_str[] ="ABCDEF";
	char	*l_pstr = "012345";
	l_str[0] = 'a';

	printf("Local data\n");
	printf("&l_dim[0] = %p\n", &l_dim[0]);
	printf("&l_str[0] = %p\n", &l_str[0]);
	printf("&l_pstr = %p\n", &l_pstr);
	dump(&l_dim[0], sizeof(l_dim));
	dump(&l_str[0], sizeof(l_str));
	dump(&l_pstr, sizeof(l_pstr));
	dump(l_pstr, strlen(l_pstr)+1);
    	printf("\n");


	static char	sl_dim[8];
	static char	sl_str[] ="ABCDEF";
	static char	*sl_pstr = "012345";
	sl_str[0] = 'a';

	printf("Local static data\n");
	printf("&sl_dim[0] = %p\n", &sl_dim[0]);
	printf("&sl_str[0] = %p\n", &sl_str[0]);
	printf("&sl_pstr = %p\n", &sl_pstr);
	dump(&sl_dim[0], sizeof(sl_dim));
	dump(&sl_str[0], sizeof(sl_str));
	dump(&sl_pstr, sizeof(sl_pstr));
	dump(sl_pstr, strlen(sl_pstr)+1);
    	printf("\n");


	const char	cl_dim[8];
	const char	cl_str[] ="ABCDEF";
	const char	*cl_pstr = "012345";
//	cl_str[0] = 'a';	/* Read only */
//	cl_dim[0] = 'a';	/* Read only */

	printf("Local const data\n");
	printf("&cl_dim[0] = %p\n", &cl_dim[0]);
	printf("&cl_str[0] = %p\n", &cl_str[0]);
	printf("&cl_pstr = %p\n", &cl_pstr);
	dump(&cl_dim[0], sizeof(cl_dim));
	dump(&cl_str[0], sizeof(cl_str));
	dump(&cl_pstr, sizeof(cl_pstr));
	dump(cl_pstr, strlen(cl_pstr)+1);
    	printf("\n");


	char*	h_str = malloc(16);
	strcpy(h_str, "ABCDEF");
	h_str[0] = 'a';

	printf("Local heap data\n");
	printf("h_str = %p\n", h_str);
	dump(h_str, 16);
    	printf("\n");


	free(h_str);
}

