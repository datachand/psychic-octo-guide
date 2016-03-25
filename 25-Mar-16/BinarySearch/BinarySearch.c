#include "BinarySearch.h"

int BinarySearch (int * array, int size, int value) {
	int start = 0;
	int end = size - 1;
	int mid;

	while (start <= end) {
		mid = (start + end) / 2;
		if (value == array[mid]) {
			return mid;
		} else if (value < array[mid]) {
			end = mid - 1;
		} else if (value > array[mid]) {
			start = mid + 1;
		}
	}
	return -1;
}

int RecursiveBinarySearch (int * array, int value, int start, int end) {

	if (start > end) return -1;

	int mid = (start + end) / 2;
	
	if (value == array[mid]) {
		return mid;
	} else if (value < array[mid]) {
		RecursiveBinarySearch(array, value, start, mid - 1);
	} else if (value > array[mid]) {
		RecursiveBinarySearch(array, value, mid + 1, end);			
	}
}