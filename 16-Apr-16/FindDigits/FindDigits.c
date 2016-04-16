#include <stdio.h>
#include <stdlib.h>

int EvenlyDivisibleFactorCount (int array_number, int * factor, int factor_size);
int NumberSize (int number);
int * NumberExtraction (int number);

int main(int argc, char const *argv[])
{
	/* code */
	int testcase;
	scanf("%d", &testcase);

	int * number_array = (int *) malloc(testcase * sizeof(int));
	int ** extract_array = (int **) malloc(testcase * sizeof(int *));

	NumberExtraction(1012);

	for (int i = 0; i < testcase; i++) {
		scanf("%d", &number_array[i]);
	}

	for (int i = 0; i < testcase; i++) {
		int number_size = NumberSize(number_array[i]);
		extract_array[i] = (int *) malloc (number_size * sizeof(int));
		extract_array[i] = NumberExtraction(number_array[i]);
		printf("%d\n", EvenlyDivisibleFactorCount(number_array[i], extract_array[i], number_size));
	}


	return 0;
}

int NumberSize (int number) {
	int size = 0;
	int temp = number;

	while (temp > 0) {
		temp = temp/10;
		size++;
	}

	return size;
}

int * NumberExtraction (int number) {
	int temp = number;
	int * collective = (int *) malloc(NumberSize(number) * sizeof(int));
	int index = 0;
	while (temp > 0) {
		int output = temp%10;
		temp = temp/10;
		collective[index] = output;
		index++;
	}

	return collective;
}


int EvenlyDivisibleFactorCount (int array_number, int * factor, int factor_size) {

	int count = 0;

	for (int i = 0; i < factor_size; i++) {
		if (factor[i] != 0) {
			if ((array_number%factor[i]) == 0) {
				count++;
			}
		}
	}

	return count;
}