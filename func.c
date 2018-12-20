#include <stdio.h>

int fact(int n) {
    if (n <= 1) {
        return 1;
    }
    else {
        return n*fact(n-1);
    }
}

int main() {
    int i = fact(5);
    printf("Output of fact(5): %d \n", i);

    return 0;
}
