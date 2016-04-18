#include <stdio.h>
#include <stdlib.h>

long long int EvenFibonacci (long long int limit);

int main(int argc, char const *argv[])
{
	/* code */
	int testcase;
	scanf("%d", &testcase);

	long long int * number_array = (long long int *) malloc (testcase * sizeof(long long int));
	for (int i = 0; i < testcase; i++) {
		scanf("%lld", &number_array[i]);
	}

	for (int i = 0; i < testcase; i++) {
		printf("%lld\n", EvenFibonacci(number_array[i]));
	}

	return 0;
}


long long int EvenFibonacci (long long int limit) {
	long long int current = 0, next = 1;
	long long int iterate = 0;
	long long int sum = 0;

	for (int i = 2; i < limit; i++) {

		iterate = current + next;

		if (iterate > limit) break;

		if (iterate%2 == 0) {
			sum += iterate;
		}

		current = next;
		next = iterate;
	}

	return sum;
}