#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int Pairs (int * array, int size, int threshold);

int main(int argc, char const *argv[])
{
	/* code */
	int n, k;
	scanf("%d %d", &n, &k);

	int * number_array = (int *) malloc (n * sizeof(int));
	for (int i = 0; i < n; i++) {
		scanf("%d", &number_array[i]);
	}

	printf("%d\n", Pairs(number_array, n, k));

	return 0;
}


int Pairs (int * array, int size, int threshold) {
	int count = 0;
	for (int i = 0; i < size; i++) {
		int current = array[i];
		for (int j = 0; j < size; j++) {

			if (abs(current - array[j]) == threshold) {
				count++;
			}
		}
	}

	return count/2;
}