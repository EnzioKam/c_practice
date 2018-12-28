#include <stdio.h>

int main(int argc, char *argv[] )  {

    printf("Program name %s\n", argv[0]);

    if(argc == 1) {
        printf("No arguments provided.\n");
    }
    else if(argc <= 3) {
        printf("The first argument is %s\n", argv[1]);
    }
    if(argc == 3) {
        printf("The second argument is %s\n", argv[2]);
    }
    else if(argc > 3) {
        printf("Too many arguments provided.\n");
    }
    else {
        printf("Two arguments expected.\n");
    }

    return 0;
}
