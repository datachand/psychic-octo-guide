#include <stdio.h>
#include <stdlib.h>

void SelectionSort (int * array, int n);

int main(int argc, char const *argv[])
{
	/* code */
	int size;
	scanf("%d", &size);

	int * number_array = (int *) malloc (size * sizeof(int));

	for (int i = 0; i < size; i++) {
		scanf("%d", &number_array[i]);
	}

	SelectionSort(number_array, size);

	for (int i = 0; i < size; i++) {
		printf("%d\t", number_array[i]);
	}
	return 0;
}

void SelectionSort (int * array, int n) {

	for (int i = 0; i < n-1; i++) {
		int minimum = i;

		for (int j = i+1; j < n; j++) {
			if (array[j] < array[minimum])
				minimum = j;
		}

		int temp = array[i];
		array[i] = array[minimum];
		array[minimum] = temp;
	}

}