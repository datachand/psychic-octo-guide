#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
	/* code */
	int testcase;
	scanf("%d", &testcase);

	long long int * num1 = (long long int *) malloc(testcase * sizeof(long long int));
	long long int * num2 = (long long int *) malloc(testcase * sizeof(long long int));
	for (int i = 0; i < testcase; i++) {
		scanf("%lld %lld", &num1[i], &num2[i]);
	}

	for (int i = 0; i < testcase; i++) {
		int count = 0;

		for (long long int j = num1[i]; j <= num2[i]; j++) {
			long long int k = 1;
			long long int temp = j;

			while (temp > 0) {
				temp -= k;
				k += 2;
			}

			if (temp == 0)
				count++;
		}

		printf("%d\n", count);
	}

	return 0;
}
