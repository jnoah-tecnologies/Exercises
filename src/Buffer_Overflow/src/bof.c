#include <sys/types.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int CallMe() {
	printf("OK! cat flag2\n");
	setuid(0);
	system("/bin/cat flag2");
	exit(0);
}



int check(char* password) {
	char magic_buffer[16];
	int flag = 0;
	strcpy(magic_buffer, password);

	return flag;
}

int main(int argc, char* argv[], char* envp[]) {
	if (argc != 2) {
//		printf("main=%p\n", main);
		printf("usage : ./%s [magic code]\n", argv[0]);
		exit(0);
	}
	if (check(argv[1]) != 0) {
		printf("Magic code is match!\n");
		setuid(0);
		system("/bin/cat flag");
		exit(0);
	}
	else {
		printf("Wrong magic code...\n");
	}
	return 0;
}

