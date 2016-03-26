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


	int similarnumbers[10] = {2, 20, 20, 20, 20, 20, 81, 97};

	printf("%d\n", FirstOccurence(similarnumbers, 8, 20));
	printf("%d\n", LastOccurence(similarnumbers, 8, 20));

	return 0;
}