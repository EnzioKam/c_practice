#include <stdio.h>
#include <stdlib.h>

int main() {

    int dividend, divisor, quotient;

    printf("Enter the dividend value: ");
    scanf("%d", &dividend);
    printf("Enter the divisor value: ");
    scanf("%d", &divisor);

    if( divisor == 0) {
        fprintf(stderr, "Division by zero! Exiting...\n");
        exit(EXIT_FAILURE);
    }

    quotient = dividend / divisor;
    fprintf(stderr, "Value of quotient : %d\n", quotient );

    exit(EXIT_SUCCESS);

    return 0;
}
