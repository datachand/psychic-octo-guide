#include "BinarySearch.h"

int BinarySearch (int * array, int size, int value) {
	int start = 0;
	int end = size - 1;
	int mid;

	while (start <= end) {
		mid = start + (end-start)/2; // (start + end) / 2; since 32-bit signed integer can store maximum of 2^31, if both low and high are pretty high then (high+low) exceeds 2^31 and may overflow
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
		return RecursiveBinarySearch(array, value, start, mid - 1);
	} else if (value > array[mid]) {
		return RecursiveBinarySearch(array, value, mid + 1, end);			
	}
}

int FirstOccurence (int * array, int size, int value) {
	int start = 0;
	int end = size - 1;
	int mid;
	int result = -1;

	while (start <= end) {
		mid = start + (end - start)/2;

		if (value == array[mid]) {
			result = mid;
			end = mid-1;
		} else if (value < array[mid]) {
			end = mid-1;
		} else if (value > array[mid]) {
			start = mid + 1;
		}

	}
	return result;
}


int LastOccurence (int * array, int size, int value) {
	int start = 0;
	int end = size - 1;
	int mid;
	int result = -1;

	while (start <= end) {
		mid = start + (end - start)/2;

		if (value == array[mid]) {
			result = mid;
			start = mid+1;
		} else if (value < array[mid]) {
			end = mid-1;
		} else if (value > array[mid]) {
			start = mid + 1;
		}

	}
	return result;
}