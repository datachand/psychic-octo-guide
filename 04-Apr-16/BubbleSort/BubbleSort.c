#include <stdio.h>
#include <stdlib.h>

void swap (int * x, int * y);

void BubbleSort (int * array, int n);

int main(int argc, char const *argv[])
{
	/* code */
	int size;
	scanf("%d", &size);

	int * number_array = (int *) malloc(size * sizeof(int *));

	for (int i = 0; i < size; i++) {
		scanf("%d", &number_array[i]);
	}

	BubbleSort(number_array, size);

	for (int i = 0; i < size; i++) {
		printf("%d\t", number_array[i]);
	}

	return 0;
}

void BubbleSort (int * array, int n) {

	for (int i = 0; i < n-1; i++) 
		for (int j = 0; j < n-i-1; j++)
			if (array[j] > array[j+1])
				swap(&array[j], &array[j+1]);
}

void swap (int * x, int * y) {
	int temp = *x;
	*x = *y;
	*y = temp;
}