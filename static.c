#include <stdio.h>

static int count = 5;

void func() {
    static int i = 5;
    i++;

    printf("i is %d and count is %d\n", i, count);
}

int main() {

    while(count--) {
        func();
    }

    return 0;
}

