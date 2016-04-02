#include <stdio.h>
#include <stdlib.h>

int simpleArraySum (int * array, int n);

int main(int argc, char const *argv[])
{
	/* code */
	int number;
	scanf("%d", &number);

	int * number_array = (int *) malloc (number * sizeof(int));

	for (int i = 0; i < number; i++) {
		scanf("%d", &number_array[i]);
	}

	printf("%d\n", simpleArraySum(number_array, number));

	return 0;
}

int simpleArraySum (int * array, int n) {
	int sum = 0;

	for (int i = 0; i < n; i++) {
		sum += array[i];
	}

	return sum;
}