#include <stdio.h>
#include <stdlib.h>

long long int aVeryBigSum (long long int * array, int n);

int main(int argc, char const *argv[])
{
	/* code */
	int number;
	scanf("%d", &number);

	long long int * number_array;
	number_array = (long long int *) malloc (number * sizeof(long long int));

	for (int i = 0; i < number_array; i++) {
		scanf("%lld", &number_array[i]);
	}

	printf("%lld\n", aVeryBigSum(number_array, number));

	return 0;
}

long long int aVeryBigSum (long long int * array, int n) {

	long long int sum = 0;

	for (int i = 0; i < n; ++i) {
		/* code */
		sum += array[i];
	}

	return sum;
}