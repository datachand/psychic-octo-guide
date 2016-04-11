#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
	/* code */
	int size;
	scanf("%d", &size);

	int * array = (int *) malloc(size * sizeof(int));

	for (int i = 0; i < size; i++) {
		scanf("%d", &array[i]);
	}

	int positiveCount = 0, negativeCount = 0, zeroCount = 0;
	double positive, negative, zero;

	for (int i = 0; i < size; i++) {

		if (array[i] > 0) {
			positiveCount++;
		} else if (array[i] < 0) {
			negativeCount++;
		} else {
			zeroCount++;
		}

	}

	printf("%f\n", (float) positiveCount/size );
	printf("%f\n", (float) negativeCount/size );
	printf("%f\n", (float) zeroCount/size );

	return 0;
}