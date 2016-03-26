#include <stdio.h>
#include "BinarySearch.h"

int main(int argc, char const *argv[])
{
	/* code */
	int numbers[10] = {2, 6, 13, 23, 36, 47, 63, 81, 97, 110};

	printf("%d\n", BinarySearch(numbers, 10, 63));
	printf("%d\n", BinarySearch(numbers, 10, 13));

	printf("%d\n", RecursiveBinarySearch(numbers, 97, 0, 9));
	printf("%d\n", RecursiveBinarySearch(numbers, 6, 0, 9));


	int similarnumbers[8] = {2, 20, 20, 20, 20, 20, 81, 97};

	printf("%d\n", FirstOccurence(similarnumbers, 8, 20));
	printf("%d\n", LastOccurence(similarnumbers, 8, 20));

	int duplicatenumbers[15] = {2, 5, 5, 5, 5, 20, 20, 20, 20, 20, 63, 63, 73, 81, 97};

	int firstnode = BinarySearchCount(duplicatenumbers, 15, 20, true);

	if (firstnode == -1) {
		printf("Not Existing in Array\n");
	} else {
		int lastnode = BinarySearchCount(duplicatenumbers, 15, 20, false);
		printf("%d\n", lastnode-firstnode+1);
	}

	int rotatecount[7] = {8, 11, 12, 2, 3, 5, 7};

	printf("%d\n", FindRotationCount(rotatecount, 7));

	int searchrotate[8] = {12, 14, 18, 21, 3, 6, 8, 9};

	printf("%d\n", CircularArraySearch(searchrotate, 8, 14));

	return 0;
}