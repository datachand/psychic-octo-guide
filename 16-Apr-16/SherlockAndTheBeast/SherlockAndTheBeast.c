#include <stdio.h>
#include <stdlib.h>

void DecentNumber (int number);

int main(int argc, char const *argv[])
{
	/* code */
	int testcase;
	scanf("%d", &testcase);

	int * number_array = (int *) malloc (testcase * sizeof(int));

	for (int i = 0; i < testcase; ++i) {
		scanf("%d", &number_array[i]);
	} 

	for (int i = 0; i < testcase; ++i) {
		DecentNumber(number_array[i]);
	}
	
	return 0;
}

void DecentNumber (int number) {
	int z = number;

	while (z%3 != 0) {
		z -= 5;
	}

	if (z < 0) {
		printf("%d\n", -1);
	} else {
		for (int i = 0; i < z; i++) printf("5");
		for (int i = 0; i < (number - z); i++) printf("3");
		printf("\n");
	}
}