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

struct NAME_LIST {
    char* name;
    short id;
    char gender;
    short age;
};


int main() {

    struct NAME_LIST list[] ={{ "TARO", 3, 'M', 11}, {"HANA", 2, 'F', 9}};

    printf("sizeof(NAME_LIST) = %lu\n", sizeof(list[0]));
    printf("\n");

    printf("sizeof(list[0].name) = %lu\n", sizeof(list[0].name));
    printf("sizeof(list[0].id) = %lu\n", sizeof(list[0].id));
    printf("sizeof(list[0].gender) = %lu\n", sizeof(list[0].gender));
    printf("sizeof(list[0].age) = %lu\n", sizeof(list[0].age));
    printf("\n");

    printf("&list[0].name = %p\n", &list[0].name);
    printf("&list[0].id = %p\n", &list[0].id);
    printf("&list[0].gender = %p\n", &list[0].gender);
    printf("&list[0].age = %p\n", &list[0].age);
    printf("\n");


    printf("list[0]\n");
    dump(&list[0], sizeof(list[0]));
    printf("list[1]\n");
    dump(&list[1], sizeof(list[1]));


}

