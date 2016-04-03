#include <stdio.h>
#include <stdlib.h>

/*
	Insertion Sort
	--------------
	Best Case (Sorted Array) => an+b = O(n)
	Worst Case (Reverse Sorted Array) => an^2 + bn + c = O(n^2)
	Average Case (Unsorted Array) => O(n^2)
 */

int * InsertionSort(int * array, int n);

int main(int argc, char const *argv[])
{
	/* code */
	int size;
	scanf("%d", &size);

	int * number_array = (int *) malloc(size * sizeof(int *));
	int * sorted_array = (int *) malloc(size * sizeof(int *));

	for (int i = 0; i < size; i++) {
		scanf("%d", &number_array[i]);
	}

	sorted_array = InsertionSort(number_array, size);

	for (int i = 0; i < size; i++) {
		printf("%d\t", sorted_array[i]);
	}	
	

	return 0;
}

int * InsertionSort (int * array, int n) {

	if (n <= 0) {
		return;
	}

	for (int i = 1; i <= n-1; i++) {
		int value = array[i];
		int hole = i;

		while (hole > 0 && array[hole-1] > value) {
			array[hole] = array[hole-1];
			hole--;
		}

		array[hole] = value;
	}


	return array;

}