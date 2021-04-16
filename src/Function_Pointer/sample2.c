#include <stdio.h>

int add(int num1, int num2) {
        return num1 + num2;
}

int sub(int num1, int num2) {
        return num1 - num2;
}

int mul(int num1, int num2) {
        return num1 * num2;
}

int div(int num1, int num2) {
        return num1 / num2;
}

struct FUNC_LIST {
        int (*func)(int, int);
        int num1;
        int num2;
};


char* func_name(int (*f)(int, int)) {
        static char* name[] = {"+", "-", "*", "/"};
        if (f == add)
               return name[0];
        if (f == sub)
               return name[1];
        if (f == mul)
               return name[2];
        if (f == div)
               return name[3];
        return "";
}

int main() {
        struct FUNC_LIST list[] = {
                {add, 10, 24},
                {sub, 100, 99},
                {mul, 26, 7},
                {div, 400, 25}
        };

        for (int i = 0; i < 4; i++) {
                printf("%d %s %d = %d\n",
                        list[i].num1,
                        func_name(list[i].func),
                        list[i].num2,
                        list[i].func(list[i].num1, list[i].num2)
                      );
        }

}

