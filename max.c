#include <stdio.h>
#include <math.h>

int main() {

	printf ("sizeof int = %lu bytes.\n", sizeof(int));
	printf ("sizeof long = %lu bytes.\n", sizeof(long));
	printf ("sizeof long long = %lu bytes.\n", sizeof(long long));

	printf ("max int = %d \n", (int)(pow(2, 32) - 1));
	printf ("max long = %ld \n", (long)(pow(2, 64) - 1));
	printf ("max long long = %lld\n", (long long)(pow(2, 64) - 1));

}