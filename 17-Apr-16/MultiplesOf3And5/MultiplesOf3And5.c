#include <stdio.h>
#include <stdlib.h>

long long int MultiplesOf3And5 (long long int n);

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
		printf("%lld\n", MultiplesOf3And5(number_array[i]));
	}

	return 0;
}


long long int MultiplesOf3And5 (long long int n) {
	long long int sum = 0;
	long long int sample = n-1;
	while (sample > 0) {
		if (sample%3 == 0 || sample%5 == 0) {
			sum += sample;
		}
		sample--;
	}

	return sum;
}