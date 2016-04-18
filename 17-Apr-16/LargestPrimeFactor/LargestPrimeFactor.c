#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <math.h>

long long int LargestPrimeFactor (long long int value);

bool isPrime (long long int number);

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
		if (number_array[i] >= 10) {
			printf("%lld\n", LargestPrimeFactor(number_array[i]));
		}
	}

	return 0;
}


long long int LargestPrimeFactor (long long int value) {
	long long int largest = 0;

	for (int i = 2; i <= value; i++) {
		if (isPrime(i)) {
			if ((value%i == 0) && (i > largest)) {
				largest = i;
			}
		}
	}

	return largest;
}

bool isPrime (long long int number) {
	if (number <= 1) return false;
	for (int i = 2; i <= sqrt(number); i++) {
		if (number%i == 0) {
			return false;
		}
	}
	return true;
}