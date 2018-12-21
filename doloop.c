#include <stdio.h>

int main() {
	int a = 10;
	do {
		printf("Current value: %d \n", a);
		a++;
	}
	while (a < 15);

	return 0;
}