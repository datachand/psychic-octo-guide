#include <stdio.h>

int main(int argc, char const *argv[])
{
	/* code */
	int size;
	scanf("%d", &size);

	for (int i = 0; i < size; i++) {

		for (int j = i; j < size - 1; j++) {
			printf(" ");
		}

		for (int k = (i+1); k > 0; k--) {
			printf("#");
		}

		printf("\n");

	}

	return 0;
}