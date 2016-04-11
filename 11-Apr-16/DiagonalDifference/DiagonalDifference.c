#include <stdio.h>
#include <stdlib.h>

int diagonalDifference(int ** array, int n);

int main(int argc, char const *argv[])
{
	/* code */
	int number;
	scanf("%d", &number);

	int ** number_matrix = (int **) malloc (number * sizeof (int *));

	for (int i = 0; i < number; i++) {
		number_matrix[i] = (int *) malloc (number * sizeof(int));
	}

	for (int i = 0; i < number; i++) {
		for (int j = 0; j < number; j++) {
			scanf("%d", &number_matrix[i][j]);
		}
	}

	printf("%d\n", diagonalDifference(number_matrix, number));

	return 0;
}

int diagonalDifference (int ** array, int n) {
	int difference = 0, diagonalOne = 0, diagonalTwo = 0, k = n;

	for (int i = 0; i < n; i++) {
		diagonalOne += array[i][i];
		diagonalTwo += array[i][k-1];
		k--;
	}

	return abs(diagonalOne - diagonalTwo);
}