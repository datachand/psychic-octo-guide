#include <stdio.h>
#include <stdlib.h>

int TreeGrowth (int number);

int main(int argc, char const *argv[])
{
	/* code */
	int testcase;
	scanf("%d", &testcase);

	int * number_array = (int *) malloc(testcase * sizeof(int));

	for (int i = 0; i < testcase; i++) {
		scanf("%d", &number_array[i]);
	}

	for (int i = 0; i < testcase; i++) { 
		printf("%d\n", TreeGrowth(number_array[i]));
	}

	return 0;
}


int TreeGrowth (int number) {
	int growth = 0;

	if (number == 0) {
		growth = 1;
	} else {
		growth = 1;
		for (int i = 0; i < number; i++) {
			if (i%2 == 0) {
				growth *= 2;
			} else {
				growth += 1;
			}
		}
	}

	return growth;
}