#include <stdio.h>

int main() {
	int a = 10;
	loop: do {
		if (a == 13) {
			a++;
			goto loop;
		}
		printf("Current value: %d \n", a);
		a++;
	}
	while (a < 15);

	return 0;
}